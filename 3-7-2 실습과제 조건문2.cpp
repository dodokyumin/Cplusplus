/* 2. �� ���� ���ڸ� �Է� �޾� ū ���� ����ϴ� ���α׷� �ۼ�
���� A �Է� : 20
���� B �Է� : 50
ū ���ڴ� 50 �Դϴ�. */

#include <stdio.h>

int main(){
	
	int numA, numB, bigNum;
	scanf("%d %d",&numA,&numB);
	printf("���� A �Է�: %d\n", numA);
	printf("���� B �Է�: %d\n", numB);
	
	if(numA < numB){
		bigNum = numB;
	}else if(numA > numB){
		bigNum = numA;
	}else if(numA = numB){
		printf("�� ���ڴ� �����ϴ�.");
	} 
	printf("ū ���ڴ� %d �Դϴ�.",bigNum);
	
	
	return 0;
} 
