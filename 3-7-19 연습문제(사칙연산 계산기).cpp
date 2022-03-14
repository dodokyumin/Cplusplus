#include <stdio.h>

int main(){
	
	int num1, num2, sum;
	char cal;

		
	for(int i=0; ; i++){
		printf("수식을 입력하세요 :");
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
			printf("잘못된 연산 기호입니다.");
			break;
		}
		printf("%d%c%d=%d 입니다.\n",num1,cal,num2,sum); 
	}
	
	return 0;
}
