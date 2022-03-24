#include <stdio.h>

int main(){
	int sum=0;
	
	for(int i=2; i<10; i=i+3){
		
		for(int j=1; j<10; j++){
			int sum = i*j;
			printf("%d x %d = %d\t",i,j,sum);
				
			sum = (i+1) *j;
			printf("%d x %d = %d\t",i+1,j,sum);
			
			if(i !=8){
				sum = (i+2) *j;
				printf("%d x %d = %d\n",i+2,j,sum);
			}else{
				printf("\n");
			}
		}
		printf("\n");
	}
}
