#include <stdio.h>

int main(){
	for(int i=2; i<10; i++){
		printf("\n  %d´Ü\n",i);
		
		for(int j=1; j<10; j++){
			int sum = i*j;
			printf("%d x %d = %d\n",i,j,sum);
		}
	}
}
