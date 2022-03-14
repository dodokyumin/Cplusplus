/*5. 입력한 년도의 각 월의 마지막 날을 출력하기
원하는 연도를 입력하세요 : 2004
2004년은 다음과 같습니다.
1월 : 31일 
2월 : 29일 * 윤년 29일, 평년 28일
3월 : 31일 
4월 : 30일 
5월 : 31일 
6월 : 31일
7월 : 30일 
8월 : 31일 
9월 : 30일 
10월 : 31일 
11월 : 30일
12월 : 31일*/

#include <stdio.h>

int main(){
	
	int year;
	printf("원하는 년도를 입력하세요 : ");
	scanf("%d", &year);
	printf("%d년은 다음과 같습니다.\n",year);
		
	if(year%4 == 0 && year%100 != 0){
		year = 29;
	}else if(year%400 == 0){
		year = 29;
	}else{
		year = 28;
	} 
	
	printf("1월 : 31일\n2월 : %d일 * 윤년 29일, 평년 28일\n3월 : 31일\n4월 : 30일\n5월 : 31일\n6월 : 31일\n7월 : 30일\n8월 : 31일\n9월 : 30일\n10월 : 31일\n11월 : 30일\n12월 : 31일",year);

	
	


	return 0;
} 
