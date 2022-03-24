#include <stdio.h>

int main(){
	
	FILE *fp = fopen("report.csv","r");
	const int MAX = 100;
	int cell = 0;
	int orderLinuxTimeArr[MAX], orderDayArr[MAX], orderTimeArr[MAX], ticketAmountArr[MAX], totPriceArr[MAX];
	char* ReciTicketTypeArr[MAX];
	char* ReciTicketPreferArr[MAX];
	
	while(fscanf(fp,"%d,%d,%d,%s,%s,%d,%d",&orderLinuxTimeArr[cell], &orderDayArr[cell], &orderTimeArr[cell], 
		&ReciTicketTypeArr[cell], &ReciTicketPreferArr[cell], &ticketAmountArr[cell], &totPriceArr[cell]) != -1){
		
		cell++;
	}
	fclose(fp);

		
	for(int index=0; index < cell; index++){
		printf("%d,%d,%d,%s,%s,%d,%d\n",orderLinuxTimeArr[index], orderDayArr[index],orderTimeArr[index], 
		ReciTicketTypeArr[index], ReciTicketPreferArr[index],ticketAmountArr[index], totPriceArr[index]);
	}
	
	return 0;
}
