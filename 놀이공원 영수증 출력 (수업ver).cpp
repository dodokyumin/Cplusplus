#include <stdio.h>

int main(){
	
	FILE *fp = fopen("example.csv","r");
	const int MAX = 100;
	int count = 0;
	int year[MAX], month[MAX], day[MAX], ticketTimeCaseArr[MAX],
	wooDaeArr[MAX],ageCaseArr[MAX],ticketPriceArr[MAX],ticketSuArr[MAX];
	
	while( fscanf(fp, "%d,%d,%d,%d,%d,%d,%d,%d",&year[count], &month[count], &day[count], &ticketTimeCaseArr[count],
	&wooDaeArr[count],&ageCaseArr[count],&ticketPriceArr[count],&ticketSuArr[count]) != -1){
		count++;	
	}
	fclose(fp);
	
	for(int index=0; index < count; index++){
		printf("%d,%d,%d,%d,%d,%d,%d,%d\n",year[index], month[index], day[index],
			 ticketTimeCaseArr[index], wooDaeArr[index],ageCaseArr[index],ticketPriceArr[index],ticketSuArr[index]);
	}
	
	return 0;
}
