#include <stdio.h>

int main(){
	
	int KRWinput;

	printf("환전을 원하는 금액(원화) : ");
	scanf("%d", &KRWinput);
	
	const float USD = KRWinput * 0.00081;
	const float CNY = KRWinput * 0.0051;
	const float JPY = KRWinput * 0.094;
	const float EUR = KRWinput * 0.00074;
	
	/*printf("환전을 원하는 금액(원화) : ");
	scanf("%d", &KRWinput); 여기에 들어갈 수 없는 이유는 input값을 받기 전에 KRWinput을 위 계산식에서 사용했기 때문*/
	
	printf("USD => %.2f\n",USD);
	printf("CNY => %.2f\n",CNY);
	printf("JPY => %.2f\n",JPY);
	printf("EUR => %.2f\n",EUR);
	
	return 0;
} 
