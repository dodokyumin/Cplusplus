#include <stdio.h>

int main(){
	int excel, powerpoint, word;
	int sum;
	float avg;
	
	printf("����, �Ŀ�����Ʈ, ����: ");
	scanf("%d %d %d", &excel, &powerpoint, &word); 
	
	sum = excel + powerpoint + word;
	avg = sum / 3;
	
	printf("�հ�: %d\n", sum);
	printf("���: %2.f\n", avg);
	
	if((avg >= 60) && (excel > 40) && (powerpoint > 40) && (word > 40)){
		printf("�հ�");	
	}else{
		printf("���հ�");
	}

} 
