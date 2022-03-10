#include <stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("output.csv","w");
	fprintf(fp, "Name,Math,English,Programming\n");
	fprintf(fp, "%s,%d,%d,%d\n","Hong",100,100,100);
	fprintf(fp, "%s,%d,%d,%d\n","Kyu",99,99,99);
	fprintf(fp, "%s,%d,%d,%d\n","Min",98,98,98);
	fprintf(fp, "%s,%d,%d,%d\n","Anthony",97,97,97);
	fclose(fp);
	return 0;
}

