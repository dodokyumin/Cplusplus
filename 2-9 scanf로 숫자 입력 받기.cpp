#include <stdio.h>

int main()
{
	float height;
	int heightModify;
	scanf("%f", &height); //180.957
	heightModify = (float)height *100; //18095.7 -> 18095, (float)�� �̿��� �Ǽ����·� ������ش�. 
	printf("Ű :%0.2f", height); 
	return 0;
}

