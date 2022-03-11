#include <stdio.h>

int main(){
	int age = 68;
	int fee = 2000;
	if(age >= 65){
		fee = 0;
	}
	printf("나이: %d\n", age);
	printf("요금: %d\n", fee);
	
	return 0;
} 
