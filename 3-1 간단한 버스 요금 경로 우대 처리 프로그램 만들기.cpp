#include <stdio.h>

int main(){
	int age = 68;
	int fee = 2000;
	if(age >= 65){
		fee = 0;
	}
	printf("����: %d\n", age);
	printf("���: %d\n", fee);
	
	return 0;
} 
