
#include <stdio.h>

int main(){
	
	int year;
	int isLeapYear;
	printf("���ϴ� �⵵�� �Է��ϼ��� : ");
	scanf("%d", &year);

	/*if(((year%4) == 0 && (year%100) != 0)  ||  (year%400) == 0 ){
		printf("���� �Դϴ�.");
	}else{
		printf("������ �ƴմϴ�.");
	} */

	if(((year%4) == 0 && (year%100) != 0)  ||  (year%400) == 0 ){
		isLeapYear = 1;
	}
	switch(isLeapYear){
		case 0 :
			printf("������ �ƴմϴ�.");
			break;
		case 1 :
			printf("���� �Դϴ�.");
			break;
	}
	


	return 0;
} 
