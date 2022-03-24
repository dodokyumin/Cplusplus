#include <stdio.h>

int main(){
	
	FILE *fp = fopen("report.csv","r");
	int orderLinuxTimeArr[99999], orderDayArr[99999], orderTimeArr[99999], ticketAmountArr[100], totPriceArr[100];
	char* ReciTicketTypeArr[100][2][100] = {" "};
	char* ReciTicketPreferArr[100][2][100] = {" "};
	
	int cell = 0;
	
	while(feof(fp) == 0){
		
		fscanf(fp, "%d, %d, %d, %s, %s, %d, %d",&orderLinuxTimeArr[cell],&orderDayArr[cell],&ticketAmountArr[cell],
			&ReciTicketTypeArr[cell][0],&ReciTicketPreferArr[cell][0],
			&ticketAmountArr[cell],&totPriceArr[cell],&totPriceArr[cell]);
		
		printf("%d,%d,%d,%s,%s,%d,%d\n",orderLinuxTimeArr[cell],orderDayArr[cell],ticketAmountArr[cell],
			ReciTicketTypeArr[cell][0],ReciTicketPreferArr[cell][0],
			ticketAmountArr[cell],totPriceArr[cell],totPriceArr[cell]);
		
		cell++;
		
	}
	fclose(fp);
	 

	
	
	return 0;
}
