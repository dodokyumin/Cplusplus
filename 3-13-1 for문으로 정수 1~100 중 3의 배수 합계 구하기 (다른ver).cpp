#include <stdio.h>

int main(){
	
	int sum = 0;
	int i;
	for(i=0; i<=100; i+=3){
			sum = sum + i;
			printf("%d ", i);
	} 
	printf("\n1~100�� ���� �� 3�� ����� �� : %d\n", sum);
}
