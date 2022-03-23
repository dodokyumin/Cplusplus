//���̰��� ��� ���    
#include <stdio.h>
#include <time.h>

int main () {
	//���� ����
	int ticketCase, enterTime, ticketSu, wooDae, manAge, ticketPrice, ageCase, ticketTimeCase, totalTicketPrice,
		todayDate, idFront, idFrontMonth, idFrontDay, idBack, idBackFirst, yyyymmdd, again, counter;
		
	int ticketTimeCaseArr[10]={0}, wooDaeArr[10]={0}, ageCaseArr[10]={0}, ticketPriceArr[10]={0}, ticketSuArr[10]={0};
		
	const int DAY_ADULT = 56000, DAY_TEEN = 50000, DAY_KID = 46000, DAY_BABY = 15000,
	    	  DAY_ADULT_ALL = 59000, DAY_TEEN_ALL = 52000, DAY_KID_ALL = 47000, DAY_BABY_ALL = 15000,
	    	  AFTER4_ADULT = 45000, AFTER4_TEEN = 40000, AFTER4_KID = 35000, AFTER4_BABY = 15000,
	    	  AFTER4_ADULT_ALL = 48000, AFTER4_TEEN_ALL = 42000, AFTER4_KID_ALL = 36000, AFTER4_BABY_ALL = 15000,
	    	  OLDMAN_AGE=65, TEEN_AGE_MAX=18, TEEN_KID_AGE=13, KID_BABY_AGE=3, BABY_AGE_MIN=1;

	//�ð� �ҷ����� 
	time_t timer;
	struct tm* t;
	timer = time(NULL); // 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� �����Ͽ� ��������� ��
	t = localtime(&timer); // �������� ���� ����ü�� �ֱ�

	do { //���� �ʱ�ȭ 
		ticketCase=0, enterTime=0, wooDae=0, ticketSu=0, idFront=0, idBack=0;
		printf("================= �ູ���� �̿�� ���� =================\n") ;
		// �̿�� ���� �����ϱ� (���� or ��ũ)
		do {
			printf("\n�̿���� ������ �������ּ���.\n");
			printf("1. �����̿�� (�Ե�����+�μӹڹ���)\n2. ��ũ�̿�� (�Ե�����)\n");
			scanf("%d",&ticketCase);
			
			if (ticketCase >2) {
				printf("���� �߿��� �������ּ���.\n\n");
			}
			
		} while(ticketCase >2) ; //true�̸� �ٽ� do�� ����. 
		
		//��,�߰��� ���� �޼��� ��� & �Է¹ޱ� 
		do {
			printf("\n����ð��� ���� �̿���� ������ �ּ���.\n");
			printf("1. 1Day\n2. After4 (����4�ú��� ����)\n");
			scanf("%d",&enterTime);
			
			if (enterTime >2) {
				printf("���� �߿��� �������ּ���.\n\n");
			}
		} while(enterTime >2) ;
		
		//�ֹι�ȣ �Է� �ޱ� , ���� ��� 
		do {
			printf("\n�ֹε�Ϲ�ȣ�� �Է����ּ���. ('-'��� ��ĭ ����ּ���. ex) 051225 3152135)\n");
			scanf("%6d %7d",&idFront, &idBack);
			
			idBackFirst = idBack/1000000;
			idFrontMonth = (idFront/100)%100;
			idFrontDay = idFront%100; 
			//������ �ƴ� ����� 2�� 29���� �̺з� �� �� 
			if(idBackFirst >4 || idBackFirst<1 || idFrontDay>31 || idFrontDay<1 || idFrontMonth >12 ||
					idFrontDay <1 || idBack > 9999999 || idFront>999999 ||(idFrontMonth = 2 && idFrontDay>29)) {
				printf("��Ŀ� �°� �ٽ� �Է����ּ���.\n\n");
			}
		} while(idBackFirst >4 || idBackFirst<1 || idFrontDay>31 || idFrontDay<1 || idFrontMonth >12 ||
					idFrontDay <1 || idBack > 9999999 || idFront>999999 ||(idFrontMonth = 2 && idFrontDay>29)) ;	
		
		//��� ������ ����
		do {	
			printf("\n�������� �������ּ���.\n");
			printf("1.����(*�� 65�� �̻��� ��̿�� ����)\n2.����� ���\n3.���������� ���\n");
			printf("4.�ް��庴 ���\n5.�ӻ�� ���\n6.�ٵ��� �ູī�� ���\n");
			scanf("%d",&wooDae);
			
			if ( wooDae>6 ){
				printf("���� �߿��� �������ּ���.\n\n");
			} 
		} while(wooDae>6) ;

		//���ű� �ż�
		do {	
			printf("\n������ Ƽ���� �� �� �����Ͻðڽ��ϱ�?.\n");
			scanf("%d",&ticketSu);
			
			if ( ticketSu>10 ){
				printf("�ִ� 10�� ������ �� �ֽ��ϴ�.\n\n");
			} 
		} while(ticketSu>10) ;

		//�ð� �Է� 
		todayDate= (t->tm_year + 1900)*10000 + (t->tm_mon + 1)*100 + t->tm_mday;  //20220101 ���·� ���� 
		
		//1900���, 2000��� �з�
		if (idBackFirst ==3 || idBackFirst == 4) { //2000���� 
			yyyymmdd = idFront + 20000000;
		} else {                  //1900���� 
			yyyymmdd = idFront + 19000000;
		} 
	
		//�� ���� ��� 
		manAge = (todayDate - yyyymmdd)/10000;
		
		//���� ���̽� ����
		if ( manAge <KID_BABY_AGE && manAge >=BABY_AGE_MIN) { 
			ageCase=4; // ���̺� 
		} else if ((manAge >= KID_BABY_AGE && manAge <TEEN_KID_AGE)) {
			ageCase = 3; // ��� 
		} else if (manAge >= TEEN_KID_AGE && manAge <= TEEN_AGE_MAX) {
			ageCase = 2; //û�ҳ� 
		} else if ( manAge >= OLDMAN_AGE ) {
			ageCase = 5; //�� ��  
		} else {
			ageCase = 1; // � 
		}
			
		//�̿�� ���� , �־߰��� ������ ���� ���̽� �з� 
		if (ticketCase==1 && enterTime==1) {
			ticketTimeCase = 1; //���� + 1Day 
		} else if (ticketCase==1 && enterTime==2) {
			ticketTimeCase =2; //���� + 4���� 
		} else if (ticketCase == 2 && enterTime == 1) {
			ticketTimeCase = 3; //��ũ + 1Day 
		} else {
			ticketTimeCase = 4; // ��ũ + 4���� 
		} 
		
		//������ ����, ��� ����
		if ( ageCase == 1) { // ��̰�  
			if (ticketTimeCase== 1) {        // ���� + 1Day 
				ticketPrice= DAY_ADULT_ALL;
			} else if (ticketTimeCase==2) {  //���� + 4����
				ticketPrice= AFTER4_ADULT_ALL;
			}else if (ticketTimeCase ==3) {  //��ũ + 1Day 
				ticketPrice= DAY_ADULT;
			} else {                        // ��ũ + 4���� 
				ticketPrice= AFTER4_ADULT;
			}
		} else if ( ageCase == 2) {  // û�ҳ�  
			if (ticketTimeCase== 1) {
				ticketPrice=DAY_TEEN_ALL;
			} else if (ticketTimeCase==2) {
				ticketPrice=AFTER4_TEEN_ALL;
			}else if (ticketTimeCase ==3) {
				ticketPrice=DAY_TEEN;
			} else {
				ticketPrice=AFTER4_TEEN;
			}
		} else if ( ageCase == 3) { //���
			if (ticketTimeCase== 1) {
				ticketPrice=DAY_KID_ALL;
			} else if (ticketTimeCase==2) {
				ticketPrice=AFTER4_KID_ALL;
			}else if (ticketTimeCase ==3) {
				ticketPrice=DAY_KID;
			} else {
				ticketPrice=AFTER4_KID;
			}
		} else if (ageCase == 5) { // ���� (��̶� ���� ����) 
			if (ticketTimeCase== 1) {
				ticketPrice=DAY_KID_ALL;
			} else if (ticketTimeCase==2) {
				ticketPrice=AFTER4_KID_ALL;
			}else if (ticketTimeCase ==3) {
				ticketPrice=DAY_KID;
			} else {
				ticketPrice=AFTER4_KID;
			}
		} else {                  // �ֱ� 
			if (ticketTimeCase== 1) {
				ticketPrice=DAY_BABY_ALL;
			} else if (ticketTimeCase==2) {
				ticketPrice=AFTER4_BABY_ALL;
			}else if (ticketTimeCase ==3) {
				ticketPrice=DAY_BABY;
			} else {
				ticketPrice=AFTER4_BABY;
			}
		}
		
		//12���� �̸��� ���
		if ( manAge == 0) {
			ticketPrice = 0;
			ageCase = 6;
		} 
	
		//����ῡ ������ ����
		if (wooDae == 2) {
			ticketPrice = ticketPrice/2 ; //���� + ��ũ �̿�� ���  
		} else if (wooDae == 3) {
			ticketPrice = ticketPrice/2 ;
		} else if (wooDae == 4 && ticketCase==1) { //�����̿�Ǹ� ��� 
			ticketPrice = (int)(ticketPrice*51);
		} else if (wooDae == 5 && ticketCase==1 ) {
			ticketPrice = ticketPrice/2;
		} else if (wooDae == 6 && ticketCase==1) {
			ticketPrice = (int)(ticketPrice*0.7);
		}
		//���� ����
		ticketPrice *= ticketSu;
		
		//����� �Ѿ� ���.
		if (ticketPrice==0){
			printf("\n���� ���� �Դϴ�.\n");
		}
		else {
			printf ("\n%d����  �ѱݾ��� %d�� �Դϴ�.\n",ticketSu,ticketPrice) ;
		}
		
		//���û��� ��, ��Ŀ� ���
		ticketTimeCaseArr[counter] = ticketTimeCase;
		wooDaeArr[counter] = wooDae;
		ageCaseArr[counter] = ageCase;
		ticketPriceArr[counter] = ticketPrice;
		ticketSuArr[counter]=ticketSu;
		totalTicketPrice += ticketPrice;
		
		//counter�� 1�߰�, �ʱⰪ�� 0 
		counter++; 
		
		//�̾ �������� ���� 
		printf("\n�̾ �̿���� �����Ͻðڽ��ϱ�?\n1.��\n2.�ƴϿ�\n");
		scanf("%d",&again); 
	} while(again == 1);
	
	printf("\n�̿����ּż� �����մϴ�.\n");
	
	
	FILE *fp = fopen("report.csv","a"); //���� ������ ���� �� �� 
	
	// ������ ���
	printf("\n\n===================================== %s =====================================\n","�ູ����") ;
	printf("%s\t\t%s\t     %s\t  %s\t\t%s\n\n","���û���","��  ��","�ż�","����","������");
	for (int i =0; i<counter; i++) {
		
		fprintf(fp, "%d,%d,%d,%d,%d,%d\n",ticketTimeCaseArr[i],wooDaeArr[i],ageCaseArr[i],ticketPriceArr[i],ticketSuArr[i]); //timestamp�� �α׸� �� ������ ������ �ð��� ���� �����ϴ� ���α׷��� ¥���Ѵ�. 
		
		switch (ticketTimeCaseArr[i]) {
			case 1:
				printf("%s\t%s","�����̿��","1Day");
				break;
			case 2:
				printf("%s\t%s","�����̿��","After4");
				break;
			case 3:
				printf("%s\t%s","��ũ�̿��","1Day");
				break;
			case 4:
				printf("%s\t%s","��ũ�̿��","After4");
				break;
			default:
				break;
		}
		
		switch (ageCaseArr[i]) {
			case 1:
				printf("\t%s","��  ��");
				break;
			case 2:
				printf("\t%s","û�ҳ�");
				break;
			case 3:
				printf("\t%s","���");
				break;
			case 4:
				printf("\t%s","��  ��");
				break;
			case 5:
				printf("\t%s","��  ��");
				break;
			case 6:
				printf("\t%s","��  ��");
				break;
			default:
				break;
		}
		
		printf("%10d%14d��\t",ticketSuArr[i],ticketPriceArr[i]) ;
		
		switch (wooDaeArr[i]) {
			case 1:
				printf("%s\n","������ ����");
				break;
			case 2:
				printf("%s\n","����� ���");
				break;
			case 3:
				printf("%s\n","���������� ���");
				break;
			case 4:
				printf("%s\n","�ް��庴 ���");
				break;
			case 5:
				printf("%s\n","�ӻ�� ���");
				break;
			case 6:
				printf("%s\n","�ٵ��� �ູī�� ���");
				break;
			default:
				break;
		}
	}
	fclose(fp); //�������� 
	printf("\n����� �Ѿ��� %d�� �Դϴ�.", totalTicketPrice);
	printf("\n=====================================================================================\n") ;
	 
	return 0; 
}

