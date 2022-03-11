#include <stdio.h>

int main(){
	int excel, powerpoint, word;
	int sum;
	float avg;
	
	printf("엑셀, 파워포인트, 워드: ");
	scanf("%d %d %d", &excel, &powerpoint, &word); 
	
	sum = excel + powerpoint + word;
	avg = sum / 3;
	
	printf("합계: %d\n", sum);
	printf("평균: %2.f\n", avg);
	
	if((avg >= 60) && (excel > 40) && (powerpoint > 40) && (word > 40)){
		printf("합격");	
	}else{
		printf("불합격");
	}

} 
