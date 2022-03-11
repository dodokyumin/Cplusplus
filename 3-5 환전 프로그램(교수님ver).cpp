#include <stdio.h>

int main(){
	
	int won;
	const float USD_RATE = 1232.52;
	const float CNY_RATE = 194.88;
	const float JPY_RATE = 10.60;
	const float EUR_RATE = 1355.05;
	
	printf("환전을 원하는 금액(원화) : ");
	scanf("%d", &won);
	
	printf("USD => %.2f USD\n",won / USD_RATE);
	printf("CNY => %.2f CNY\n",won / CNY_RATE);
	printf("JPY => %.2f JPY\n",won / JPY_RATE);
	printf("EUR => %.2f EUR\n",won / EUR_RATE);
	
	return 0;
} 
