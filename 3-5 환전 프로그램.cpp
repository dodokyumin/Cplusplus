#include <stdio.h>

int main(){
	
	int KRWinput;

	printf("ȯ���� ���ϴ� �ݾ�(��ȭ) : ");
	scanf("%d", &KRWinput);
	
	const float USD = KRWinput * 0.00081;
	const float CNY = KRWinput * 0.0051;
	const float JPY = KRWinput * 0.094;
	const float EUR = KRWinput * 0.00074;
	
	/*printf("ȯ���� ���ϴ� �ݾ�(��ȭ) : ");
	scanf("%d", &KRWinput); ���⿡ �� �� ���� ������ input���� �ޱ� ���� KRWinput�� �� ���Ŀ��� ����߱� ����*/
	
	printf("USD => %.2f\n",USD);
	printf("CNY => %.2f\n",CNY);
	printf("JPY => %.2f\n",JPY);
	printf("EUR => %.2f\n",EUR);
	
	return 0;
} 
