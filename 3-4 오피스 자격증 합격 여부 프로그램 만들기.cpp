#include <stdio.h>

int main(){
	int excel, powepoint, word;
	int sum;
	float avg;
	
	printf("엑셀, 파워포인트, 워드: ");
	scanf("%d %d %d", &excel, &powepoint, &word); 
	
	sum = excel + powepoint + word;
	avg = sum / 3;
	
	printf("합계: %d\n", sum);
	printf("평균: %2.f\n", avg);
	
	if(avg >= 60){
		printf("합격");	
	}else{
		printf("불합격");
	}

} 
