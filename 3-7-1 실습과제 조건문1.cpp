/*1. 입력한 값이 홀수인지 짝수인지를 판별하는 프로그램을 작성하시오.
숫자 입력 : 100
짝수 입니다.*/

#include <stdio.h>

int main(){
	
	int age;
	scanf("%d",&age);
	printf("숫자 입력: %d\n", age);
	
	if(age%2 == 1 ){
		printf("홀수 입니다.");
	}else{
		printf("짝수 입니다.");
	} 
	
	return 0;
} 
