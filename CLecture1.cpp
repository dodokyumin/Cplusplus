#include <stdio.h>
#include <cstring>
#include <iomanip>
#include <iostream>

int main()
{
	int americano = 4500, mount = 1, thousands = 1000; //아메리카노는 한사람당 223잔 이하로 사야함 
	int totalAmericano = americano*mount;
	int totAmeriTax = totalAmericano/10;
	int	totAmeTho = totalAmericano/thousands;
	int totAmeHun = totalAmericano%thousands;
	
	printf("(주)처음커피\n\n");
	printf(" 영수증NO :%d-%d\n",0015,1);
	printf("사업자번호 :%d\n",1298801502);
	printf("주소 :%s %s %s %d-%d %s\n","서울","노원구","동일로",1693,6,"(상계\n동 1260, 수락산우체국 2층)");
	printf("성명 :%s\n","김진규");
	printf("전화 :%s\n","02-937-6700");
	printf("일자 :%s-%s-%s %s:%s:%s\n","2021","04","10","15","08","34");
	printf("--------------------------------------\n");
	printf("품명\t\t단가\t수량\t금액\n");	
	printf("--------------------------------------\n");
	printf("%s\n","(Ice) 아메리카노");
		

	printf("%17d,%03d %5d %6d,%03d \n",americano/thousands,americano%thousands,mount,totAmeTho,totAmeHun); 
	//std::cout << std::setfill('0') << std::setw(3) << totalAmericano%thousands;
	printf("--------------------------------------\n");	
	printf("공급가액 :%24d,%03d \n",(totalAmericano-totAmeriTax)/thousands,(totalAmericano-totAmeriTax)%thousands);
	printf("부가세   :%28d \n",totAmeriTax);
	printf("--------------------------------------\n");	
	printf("청구금액 :%24d,%03d \n",totAmeTho,totAmeHun);
	printf("받은금액 :%24d,%03d \n",totAmeTho,totAmeHun);
	printf("거스름돈 :%28d \n",0);
	printf("--------------------------------------\n");	
	printf("신용카드 :%24d,%03d \n",totAmeTho,totAmeHun);
	printf("--------------------------------------\n");	
	
	return 0;
}
