#include <stdio.h>

int main(){
	int excel, powepoint, word;
	int sum;
	float avg;
	
	printf("����, �Ŀ�����Ʈ, ����: ");
	scanf("%d %d %d", &excel, &powepoint, &word); 
	
	sum = excel + powepoint + word;
	avg = sum / 3;
	
	printf("�հ�: %d\n", sum);
	printf("���: %2.f\n", avg);
	
	if(avg >= 60){
		printf("�հ�");	
	}else{
		printf("���հ�");
	}

} 
