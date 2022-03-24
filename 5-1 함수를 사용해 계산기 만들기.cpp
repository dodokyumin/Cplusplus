#include <stdio.h>
	
int add(int a, int b){
		return a + b;
	}

int min(int a, int b){
		return a - b;
	}

int div(int a, int b){
		return a / b;
	}
	
int mul(int a, int b){
		return a * b;
	}
	
int powA(int a, int b){
		int sum = 1;
		for(int i=0; i<b; i++){
			sum = sum*a;
		}
		return sum;
	}

int main(){
	printf("%d\n",add(5, 2));
	printf("%d\n",min(5, 2));
	printf("%d\n",div(5, 2));
	printf("%d\n",mul(5, 2));
	printf("%d\n",powA(5, 2));
	
}
