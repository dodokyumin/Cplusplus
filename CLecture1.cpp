#include <stdio.h>
#include <cstring>
#include <iomanip>
#include <iostream>

int main()
{
	int americano = 4500, mount = 1, thousands = 1000; //�Ƹ޸�ī��� �ѻ���� 223�� ���Ϸ� ����� 
	int totalAmericano = americano*mount;
	int totAmeriTax = totalAmericano/10;
	int	totAmeTho = totalAmericano/thousands;
	int totAmeHun = totalAmericano%thousands;
	
	printf("(��)ó��Ŀ��\n\n");
	printf(" ������NO :%d-%d\n",0015,1);
	printf("����ڹ�ȣ :%d\n",1298801502);
	printf("�ּ� :%s %s %s %d-%d %s\n","����","�����","���Ϸ�",1693,6,"(���\n�� 1260, �������ü�� 2��)");
	printf("���� :%s\n","������");
	printf("��ȭ :%s\n","02-937-6700");
	printf("���� :%s-%s-%s %s:%s:%s\n","2021","04","10","15","08","34");
	printf("--------------------------------------\n");
	printf("ǰ��\t\t�ܰ�\t����\t�ݾ�\n");	
	printf("--------------------------------------\n");
	printf("%s\n","(Ice) �Ƹ޸�ī��");
		

	printf("%17d,%03d %5d %6d,%03d \n",americano/thousands,americano%thousands,mount,totAmeTho,totAmeHun); 
	//std::cout << std::setfill('0') << std::setw(3) << totalAmericano%thousands;
	printf("--------------------------------------\n");	
	printf("���ް��� :%24d,%03d \n",(totalAmericano-totAmeriTax)/thousands,(totalAmericano-totAmeriTax)%thousands);
	printf("�ΰ���   :%28d \n",totAmeriTax);
	printf("--------------------------------------\n");	
	printf("û���ݾ� :%24d,%03d \n",totAmeTho,totAmeHun);
	printf("�����ݾ� :%24d,%03d \n",totAmeTho,totAmeHun);
	printf("�Ž����� :%28d \n",0);
	printf("--------------------------------------\n");	
	printf("�ſ�ī�� :%24d,%03d \n",totAmeTho,totAmeHun);
	printf("--------------------------------------\n");	
	
	return 0;
}
