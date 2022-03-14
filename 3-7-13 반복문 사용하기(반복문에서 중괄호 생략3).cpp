#include <stdio.h>

int main(){
	
	int i;
	for(i = 0; i < 100; i++)
		printf("Hello World! \n"); // 반복할 코드가 한 줄이라면 중괄호 생략 
		
	for(i = 0; i < 100; i++)
	{	//반복할 코드가 두 줄 이상이라면 중괄호로 묶어줌.	
		printf("for 반복문\n"); // 이 줄만 반복됨 
		printf("Hello World! \n"); 
	}
	return 0;
}
