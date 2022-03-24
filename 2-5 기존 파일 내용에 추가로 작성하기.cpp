#include <stdio.h>

int main()
{
	FILE *fp; 
	fp = fopen("output.txt","a");
	
	fprintf(fp, "메모장에 이 내용을 입력하고 (이어쓰기)저장합니다.\n");
	
	fclose(fp);

	return 0;
}


