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
	
	printf("환전을 원하는 금액(원화) : ");
	scanf("%d", &won);
	printf("환전할 외화를 선택하세요.(1:USD, 2:CNY, 3:JPY 4:EUR) : ");
	scanf("%d", &moneyNumber);
	
	if(moneyNumber == 1){
		
		changeMoneyRate = USD_RATE;
		strcpy(moneyName,"달러");
		
	}else if(moneyNumber == 2){
		
		changeMoneyRate = CNY_RATE;
		strcpy(moneyName,"위안");
		
	}else if(moneyNumber == 3){
		
		changeMoneyRate = JPY_RATE;
		strcpy(moneyName,"엔");
		
	}else if(moneyNumber == 4){
		
		changeMoneyRate = EUR_RATE;
		strcpy(moneyName,"유로");
		
	}else{
		
		printf("나중에 다시 시도하십시오.");
		return 0;
		
	}
	
	float wonToAnother = won/changeMoneyRate;
	float fraction = (wonToAnother)-(int)(wonToAnother);
	int changeMoney = (int)(fraction*changeMoneyRate);
		
	printf("기준 환율 : %.2f\n",changeMoneyRate);
	printf("환전결과\n");
	printf("%s : %.f %s \n",moneyName, wonToAnother, moneyName);
	printf("거스름돈 : %.d 원\n", changeMoney/10*10);
	
	int fiveHun = changeMoney/500;
	int hund = changeMoney%500/100;
	int fifty = changeMoney%100/50;
	int ten = changeMoney%50/10;
	printf("500원짜리 %d개, 100원짜리%d개, 50원짜리%d개, 10원짜리 %d개",fiveHun,hund,fifty,ten); 
	
	return 0;
} 
