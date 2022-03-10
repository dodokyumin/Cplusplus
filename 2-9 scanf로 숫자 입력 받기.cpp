#include <stdio.h>

int main()
{
	float height;
	int heightModify;
	scanf("%f", &height); //180.957
	heightModify = (float)height *100; //18095.7 -> 18095, (float)을 이용해 실수형태로 만들어준다. 
	printf("키 :%0.2f", height); 
	return 0;
}

