/*3. 5���� ���ڸ� �Է� �޾� ���� ���� ����ϴ� ���α׷� �ۼ�
���� A �Է� : 10
���� B �Է� : 20
���� C �Է� : 30
���� D �Է� : 40
���� E �Է� : 50
�ִ밪�� 50 �Դϴ�.
�������� 10 �Դϴ�.*/

#include <stdio.h>

int main(){
	
	int numA, numB, numC, numD, numE;

	scanf("%d %d %d %d %d",&numA,&numB,&numC,&numD,&numE);
	printf("���� A �Է�: %d\n", numA);
	printf("���� B �Է�: %d\n", numB);
	printf("���� c �Է�: %d\n", numC);
	printf("���� D �Է�: %d\n", numD);
	printf("���� E �Է�: %d\n", numE);
		
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
	printf("�ִ밪�� %d �Դϴ�.\n",max);




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
	printf("�ּҰ��� %d �Դϴ�.\n",min);
	

	return 0;
} 
