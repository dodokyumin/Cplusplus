/*3. 5개의 숫자를 입력 받아 최저 값을 출력하는 프로그램 작성
숫자 A 입력 : 10
숫자 B 입력 : 20
숫자 C 입력 : 30
숫자 D 입력 : 40
숫자 E 입력 : 50
최대값은 50 입니다.
최저값은 10 입니다.*/

#include <stdio.h>

int main(){
	
	int numA, numB, numC, numD, numE;

	scanf("%d %d %d %d %d",&numA,&numB,&numC,&numD,&numE);
	printf("숫자 A 입력: %d\n", numA);
	printf("숫자 B 입력: %d\n", numB);
	printf("숫자 c 입력: %d\n", numC);
	printf("숫자 D 입력: %d\n", numD);
	printf("숫자 E 입력: %d\n", numE);
		
	int max = numA;
	int min = numA;
	
	if(numB > max){
		max = numB;
	} 
	if(numC > max){
		max = numC;
	} 
	if(numD > max){
		max = numD;
	} 
	if(numE > max){
		max = numE;
	} 
	printf("최대값은 %d 입니다.\n",max);




	if(numB < min){
		min = numB;
	} 
	if(numC < min){
		min = numC;
	} 
	if(numD < min){
		min = numD;
	} 
	if(numE < min){
		min = numE;
	} 
	printf("최소값은 %d 입니다.\n",min);
	

	return 0;
} 
