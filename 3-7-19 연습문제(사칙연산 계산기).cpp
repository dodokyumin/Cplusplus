#include <stdio.h>

int main(){
	
	int num1, num2, sum;
	char cal;

		
	for(int i=0; ; i++){
		printf("������ �Է��ϼ��� :");
		scanf("%d%c%d", &num1, &cal, &num2);
	
		if(cal == '+'){
			
			sum = num1 + num2;
			
		}else if(cal == '-'){
			
			sum = num1 - num2;
			
		}else if(cal == '*'){
			
			sum = num1 * num2;
			
		}else if(cal == '/'){
			
			sum = num1 / num2;
			
		}else if(cal == '%'){
			
			sum = num1 % num2;
			
		}else if(cal == '^'){
				sum = num1;
			for(int j=1; j<num2; j++){
				sum = sum * num1;
			}
		}		
		else{
			printf("�߸��� ���� ��ȣ�Դϴ�.");
			break;
		}
		printf("%d%c%d=%d �Դϴ�.\n",num1,cal,num2,sum); 
	}
	
	return 0;
}
