#include <stdio.h>
#include <time.h>

	int ticketCase, ticketTime, ticketPrefer, ticketAmount, frontID, backID, firstBackID, finalTicket, totPrice;
	int userByear, userBmon, userBday, todayDate, yyyymmdd, userAge, again, cell;
	int MAX = 100; 
	int  orderLinuxTimeArr[100]={0}, orderDayArr[100]={0}, orderTimeArr[100]={0}, ticketCaseArr[100]={0}, ticketTimeArr[100]={0}, ticketPreferArr[100]={0}, ticketAmountArr[100]={0}, totPriceArr[100]={0};
	
	int ticketPriceType[2][2] = {
		{80000, 50000},
		{60000, 30000}
	};
	
	char* ReciTicketTypeArr[2][2] = {
		{"�����̿��(�ְ�)","���̰����̿��(�ְ�)"},
		{"�����̿��(�߰�)","���̰����̿��(�߰�)"}
	};
	
	char* ReciTicketPreferArr[5] = {
		"����","�����","����������","�ް��庴","�ӻ��"
	};
	
void selectTicket(){
	do{
		printf("\n%s\n\n1. %s\n2. %s\n","�̿���� ������ �������ּ���.","�����̿��(��������+������ũ)","���̰����̿�� (��������)");
		scanf("%d",&ticketCase);
	}while(ticketCase != 1 && ticketCase != 2);
		
}

void selectDayNight(){
	do{
		printf("%s\n1. %s\n2. %s\n","����ð��� ���� �̿���� �������ּ���.","�ְ���(1Day)","�߰���(After4)");
		scanf("%d",&ticketTime);
	}while(ticketTime != 1 && ticketTime != 2);
		
}

void inputUserId(){
	do{
		printf("%s\n","�ֹε�Ϲ�ȣ�� �Է����ּ���. ex)901201 1234567");
		scanf("%d %d",&frontID,&backID);
		userByear = frontID/10000;
		userBmon = frontID/100%100;
		userBday = frontID%100;
		firstBackID = backID/1000000;
	}while(userByear > 99 || userBmon > 12 || userBday > 31 || firstBackID > 4 || (userBmon == 2) && userBday > 29);
		
}

void selectPreferential(){
	do{
		printf("%s\n1. %s\n2. %s\n3. %s\n4. %s\n5. %s\n","�������� �������ּ���.","����(��65�� �̻��� ��̿��)","����� ���","���������� ���","�ް��庴 ���","�ӻ�� ���");
		scanf("%d",&ticketPrefer);
	}while(ticketPrefer > 5);		
	finalTicket = ticketPriceType[ticketTime-1][ticketCase-1];
}

void divNineTwen(){
	if (firstBackID == 3 || firstBackID == 4) { //2000���� 
		yyyymmdd = frontID + 20000000;
	} else {                  //1900���� 
		yyyymmdd = frontID + 19000000;
	} 
		
}

void setuserAge(){
	userAge = (todayDate - yyyymmdd)/10000;
}

void calPreferential(){
	if(ticketPrefer > 1 && ticketPrefer < 6){	//��� 2,3,4,5 �ش� 
		finalTicket /= 2;
	}else if(userAge < 7 || userAge >= 65){	//���&��� ��ī��Ʈ 
		finalTicket /= 2;
	}
}

void mulTicketAmount(){
	do{
		printf("%s\n","���� Ƽ���� �� �� �����Ͻðڽ��ϱ�? (�ִ� 10��)"); 
		scanf("%d",&ticketAmount);
	}while(ticketAmount > 10);
}

void selectedOneTicketPri(){
	totPrice = finalTicket*ticketAmount;
}

void totalPrice(){
	printf("%d%s %d",ticketAmount,"���� �� �ݾ���",totPrice); 
}

int main(){
	
	time_t timer;
    struct tm* t;
    timer = time(NULL); // 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� �����Ͽ� ��������� ��
    t = localtime(&timer); // �������� ���� ����ü�� �ֱ�
    todayDate = (t->tm_year + 1900)*10000 + (t->tm_mon + 1)*100 + t->tm_mday; //20220101 ���·� ���� 


	do{
		  printf("=========== %s ==========\n","�ູ���� �̿�� �����ϱ�"
		);
		ticketCase=0, ticketTime=0, ticketPrefer=0, ticketAmount=0; 
		
		//�̿�� ���� 
		selectTicket();
		//�ð��� ���� 
		selectDayNight();
		//�ֹι�ȣ 
		inputUserId();
		//������ preferential
		selectPreferential();			
		//1900���, 2000��� �з�
		divNineTwen();
		//�� ���� ��� 
		setuserAge();
		//������ �ݾ� ��� 
		calPreferential();
		//����Ƽ�� ��� ���� 
		mulTicketAmount();
		//���� ������ Ƽ�� 1�� ���� 
		selectedOneTicketPri();
		//�� �ݾ� �ȳ�
		totalPrice();
		
		//��Ŀ� �����ϱ�
		orderLinuxTimeArr[cell] = timer; //Unix�ð� (1970�� 1��1�Ϻ��� ������� ��) 
		orderDayArr[cell] = (t->tm_year + 1900)*10000 + (t->tm_mon + 1)*100 + (t->tm_mday);
		orderTimeArr[cell] = (t->tm_hour)*10000 + (t->tm_min)*100 +  (t->tm_sec);
		ticketCaseArr[cell] = ticketCase;
		ticketTimeArr[cell] = ticketTime;
		ticketPreferArr[cell] = ticketPrefer;
		ticketAmountArr[cell] = ticketAmount;
		totPriceArr[cell] = totPrice;
		
		cell++;
		 
		printf("\n�̾ �̿���� �����Ͻðڽ��ϱ�?\n1.��\n2.�ƴϿ�\n");
		scanf("%d",&again);
	}while(again == 1);
	
	printf("\n��ſ� �ð� �Ǽ���^^\n");
	
	
	FILE *fp = fopen("report.csv","a"); //���� ������ ���� �� �� 
	
	//������ 
	printf("\n\n======================================= %s ========================================\n","������") ;
	printf("%s\t%s\t%s\t%s\t\t%s\t%s\t%s\n\n","linuxtime","�ֹ�����","�ֹ��ð�","Ƽ�� ����","������","�ֹ�����","�� ����");
	
	

	int i;
	for(i=0; i<cell; i++){
		fprintf(fp, "%d,%d,%06d,%s,%s,%d,%d\n",orderLinuxTimeArr[i],orderDayArr[i],orderTimeArr[i],ReciTicketTypeArr[ticketTimeArr[i]-1][ticketCaseArr[i]-1],ReciTicketPreferArr[ticketPreferArr[i]-1],ticketAmountArr[i],totPriceArr[i]);
		
		printf("%d\t%d\t%06d\t\t%s\t%s\t\t%d\t\t%d\n\n",orderLinuxTimeArr[i],orderDayArr[i],orderTimeArr[i],ReciTicketTypeArr[ticketTimeArr[i]-1][ticketCaseArr[i]-1],ReciTicketPreferArr[ticketPreferArr[i]-1],ticketAmountArr[i],totPriceArr[i]);
	
	}
	fclose(fp); 

	return 0;
}
