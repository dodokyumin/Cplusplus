#include <stdio.h>
#include <time.h>


int main(){
	
	int ticketCase, ticketTime, ticketPrefer, ticketAmount, frontID, backID, firstBackID, finalTicket, totPrice;
	int userByear, userBmon, userBday, todayDate, yyyymmdd, userAge, again, cell;
	int MAX = 100; 
	int  orderLinuxTimeArr[MAX]={0}, orderDayArr[MAX]={0}, orderTimeArr[MAX]={0}, ticketCaseArr[MAX]={0}, ticketTimeArr[MAX]={0}, ticketPreferArr[MAX]={0}, ticketAmountArr[MAX]={0}, totPriceArr[MAX]={0};
	
    time_t timer;
    struct tm* t;
    timer = time(NULL); // 1970년 1월 1일 0시 0분 0초부터 시작하여 현재까지의 초
    t = localtime(&timer); // 포맷팅을 위해 구조체에 넣기
    
	int ticketPriceType[2][2] = {
		{80000, 50000},
		{60000, 30000}
	};
	
	char* ReciTicketTypeArr[2][2] = {
		{"종합이용권(주간)","놀이공원이용권(주간)"},
		{"종합이용권(야간)","놀이공원이용권(야간)"}
	};
	
	char* ReciTicketPreferArr[5] = {
		"없음","장애인","국가유공자","휴가장병","임산부"
	};

	do{
		printf("=========== %s ==========\n","행복랜드 이용권 구매하기");
		
		ticketCase=0, ticketTime=0, ticketPrefer=0, ticketAmount=0; 
		
		//이용권 종류 
		do{
			printf("\n%s\n\n1. %s\n2. %s\n","이용권의 종류를 선택해주세요.","종합이용권(에버랜드+워터파크)","놀이공원이용권 (에버랜드)");
			scanf("%d",&ticketCase);
		}while(ticketCase != 1 && ticketCase != 2);
		
		//시간권 선택 
		do{
			printf("%s\n1. %s\n2. %s\n","입장시간에 따른 이용권을 선택해주세요.","주간권(1Day)","야간권(After4)");
			scanf("%d",&ticketTime);
		}while(ticketTime != 1 && ticketTime != 2);
		
		//주민번호 
		do{
			printf("%s\n","주민등록번호를 입력해주세요. ex)901201 1234567");
			scanf("%d %d",&frontID,&backID);
			
			userByear = frontID/10000;
			userBmon = frontID/100%100;
			userBday = frontID%100;
			firstBackID = backID/1000000;
		}while(userByear > 99 || userBmon > 12 || userBday > 31 || firstBackID > 4 || (userBmon == 2) && userBday > 29);
		
		//우대사항 preferential
		do{
			printf("%s\n1. %s\n2. %s\n3. %s\n4. %s\n5. %s\n","우대사항을 선택해주세요.","없음(만65세 이상은 어린이요금)","장애인 우대","국가유공자 우대","휴가장병 우대","임산부 우대");
			scanf("%d",&ticketPrefer);
		}while(ticketPrefer > 5);
		
		finalTicket = ticketPriceType[ticketTime-1][ticketCase-1];
		
		
		//시간 입력 
		todayDate = (t->tm_year + 1900)*10000 + (t->tm_mon + 1)*100 + t->tm_mday;  //20220101 형태로 변형 
		
		//1900년생, 2000년생 분류
		if (firstBackID == 3 || firstBackID == 4) { //2000년대생 
			yyyymmdd = frontID + 20000000;
		} else {                  //1900년대생 
			yyyymmdd = frontID + 19000000;
		} 
		
		//만 나이 계산 
		userAge = (todayDate - yyyymmdd)/10000;
	
		//우대사항 금액 계산 
		if(ticketPrefer > 1 && ticketPrefer < 6){	//우대 2,3,4,5 해당 
			finalTicket /= 2;
		}else if(userAge < 7 || userAge >= 65){	//어린이&어르신 디스카운트 
			finalTicket /= 2;
		}
		
		//동일티켓 장수 선택 
		do{
			printf("%s\n","동일 티켓을 몇 장 구매하시겠습니까? (최대 10장)"); 
			scanf("%d",&ticketAmount);
		}while(ticketAmount > 10);
		
		//최종 선택한 티켓 1장 가격 
		totPrice = finalTicket*ticketAmount;
		
		//총 금액 안내
		printf("%d%s %d",ticketAmount,"매의 총 금액은",totPrice); 
		
		//행렬에 저장하기
		orderLinuxTimeArr[cell] = timer; //Unix시간 (1970년 1월1일부터 현재까지 초) 
		orderDayArr[cell] = (t->tm_year + 1900)*10000 + (t->tm_mon + 1)*100 + (t->tm_mday);
		orderTimeArr[cell] = (t->tm_hour)*10000 + (t->tm_min)*100 +  (t->tm_sec);
		ticketCaseArr[cell] = ticketCase;
		ticketTimeArr[cell] = ticketTime;
		ticketPreferArr[cell] = ticketPrefer;
		ticketAmountArr[cell] = ticketAmount;
		totPriceArr[cell] = totPrice;
		
		cell++;
		
		printf("\n이어서 이용권을 구매하시겠습니까?\n1.예\n2.아니요\n");
		scanf("%d",&again);
	}while(again == 1);
	
	printf("\n즐거운 시간 되세요^^\n");
	
	
	FILE *fp = fopen("report.csv","a"); //파일 포인터 변수 저 장 
	
	//영수증 
	printf("\n\n======================================= %s ========================================\n","영수증") ;
	printf("%s\t%s\t%s\t%s\t\t%s\t%s\t%s\n\n","linuxtime","주문일자","주문시간","티켓 종류","우대사항","주문수량","총 가격");
	
	

	int i;
	for(i=0; i<cell; i++){
		fprintf(fp, "%d,%d,%06d,%s,%s,%d,%d\n",orderLinuxTimeArr[i],orderDayArr[i],orderTimeArr[i],ReciTicketTypeArr[ticketTimeArr[i]-1][ticketCaseArr[i]-1],ReciTicketPreferArr[ticketPreferArr[i]-1],ticketAmountArr[i],totPriceArr[i]);
		
		printf("%d\t%d\t%06d\t\t%s\t%s\t\t%d\t\t%d\n\n",orderLinuxTimeArr[i],orderDayArr[i],orderTimeArr[i],ReciTicketTypeArr[ticketTimeArr[i]-1][ticketCaseArr[i]-1],ReciTicketPreferArr[ticketPreferArr[i]-1],ticketAmountArr[i],totPriceArr[i]);
	
	}
	fclose(fp); 

	return 0;
}
