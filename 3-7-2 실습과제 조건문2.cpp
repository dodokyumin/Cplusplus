/* 2. 두 개의 숫자를 입력 받아 큰 수를 출력하는 프로그램 작성
숫자 A 입력 : 20
숫자 B 입력 : 50
큰 숫자는 50 입니다. */

#include <stdio.h>

int main(){
	
	int numA, numB, bigNum;
	scanf("%d %d",&numA,&numB);
	printf("숫자 A 입력: %d\n", numA);
	printf("숫자 B 입력: %d\n", numB);
	
	if(numA < numB){
		bigNum = numB;
	}else if(numA > numB){
		bigNum = numA;
	}else if(numA = numB){
		printf("두 숫자는 같습니다.");
	} 
	printf("큰 숫자는 %d 입니다.",bigNum);
	
	
	return 0;
} 
