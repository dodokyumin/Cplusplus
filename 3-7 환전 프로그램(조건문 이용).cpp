#include <stdio.h>
#include <string.h>

int main(){
	
	int won;
	int moneyNumber;
	float changeMoneyRate;
	char  moneyName[10000] = "\0";
	const float USD_RATE = 1234.75;
	const float CNY_RATE = 195.16;
	const float JPY_RATE = 10.60;
	const float EUR_RATE = 1355.05;
	
	printf("ȯ���� ���ϴ� �ݾ�(��ȭ) : ");
	scanf("%d", &won);
	printf("ȯ���� ��ȭ�� �����ϼ���.(1:USD, 2:CNY, 3:JPY 4:EUR) : ");
	scanf("%d", &moneyNumber);
	
	if(moneyNumber == 1){
		
		changeMoneyRate = USD_RATE;
		strcpy(moneyName,"�޷�");
		
	}else if(moneyNumber == 2){
		
		changeMoneyRate = CNY_RATE;
		strcpy(moneyName,"����");
		
	}else if(moneyNumber == 3){
		
		changeMoneyRate = JPY_RATE;
		strcpy(moneyName,"��");
		
	}else if(moneyNumber == 4){
		
		changeMoneyRate = EUR_RATE;
		strcpy(moneyName,"����");
		
	}else{
		
		printf("���߿� �ٽ� �õ��Ͻʽÿ�.");
		return 0;
		
	}
	
	float wonToAnother = won/changeMoneyRate;
	float fraction = (wonToAnother)-(int)(wonToAnother);
	int changeMoney = (int)(fraction*changeMoneyRate);
		
	printf("���� ȯ�� : %.2f\n",changeMoneyRate);
	printf("ȯ�����\n");
	printf("%s : %.f %s \n",moneyName, wonToAnother, moneyName);
	printf("�Ž����� : %.d ��\n", changeMoney/10*10);
	
	int fiveHun = changeMoney/500;
	int hund = changeMoney%500/100;
	int fifty = changeMoney%100/50;
	int ten = changeMoney%50/10;
	printf("500��¥�� %d��, 100��¥��%d��, 50��¥��%d��, 10��¥�� %d��",fiveHun,hund,fifty,ten); 
	
	return 0;
} 
