/*1. �Է��� ���� Ȧ������ ¦�������� �Ǻ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
���� �Է� : 100
¦�� �Դϴ�.*/

#include <stdio.h>

int main(){
	
	int age;
	scanf("%d",&age);
	printf("���� �Է�: %d\n", age);
	
	if(age%2 == 1 ){
		printf("Ȧ�� �Դϴ�.");
	}else{
		printf("¦�� �Դϴ�.");
	} 
	
	return 0;
} 
