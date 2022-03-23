#include <stdio.h>

int main(){
	
	FILE *fp = fopen("report.csv","r");
	const int MAX = 100;
	int cell = 0;
	int orderLinuxTimeArr[MAX], orderDayArr[MAX], orderTimeArr[MAX], ticketCaseArr[MAX], ticketTimeArr[MAX], ticketPreferArr[MAX], ticketAmountArr[MAX], totPriceArr[MAX];
	char* ReciTicketTypeArr[MAX][MAX];
	char* ReciTicketPreferArr[MAX][MAX];
	
	while(fscanf(fp, "%d,%d,%d,%s,%s,%d,%d",&orderLinuxTimeArr[cell], &orderDayArr[cell], &orderTimeArr[cell], 
		&ReciTicketTypeArr[ticketTimeArr[cell]-1][ticketCaseArr[cell]-1], &ReciTicketPreferArr[ticketPreferArr[cell]-1], &ticketAmountArr[cell], &totPriceArr[cell]) != -1){
		
		cell++;
	}
	fclose(fp);
	
	for(int index=0; index < cell; index++){
		printf("%d,%d,%d,%s,%s,%d,%d\n",orderLinuxTimeArr[index], orderDayArr[index],orderTimeArr[index], 
		ReciTicketTypeArr[ticketTimeArr[index]-1][ticketCaseArr[index]-1], ReciTicketPreferArr[ticketPreferArr[index]-1],ticketAmountArr[index], totPriceArr[index]);
	}
	
	return 0;
}
