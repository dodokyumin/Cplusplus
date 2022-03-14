#include <stdio.h>

int main(){
	int count;
	
	scanf("%d", &count);
	
	for(; count > 0; count--){
		printf("Hello World! %d\n",count);
	}
	
	return 0;
}
