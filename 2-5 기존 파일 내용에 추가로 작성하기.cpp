#include <stdio.h>

int main()
{
	FILE *fp; 
	fp = fopen("output.txt","a");
	
	fprintf(fp, "�޸��忡 �� ������ �Է��ϰ� (�̾��)�����մϴ�.\n");
	
	fclose(fp);

	return 0;
}


