#include <stdio.h>

int main(){
	int score;
	char grade;
	
	printf("학생 점수 입력: ");
	scanf("%d",&score);
	
	if(score >= 90){
		grade = 'A';
	}else if(score>= 80){
		grade = 'B';
	}else if(score >= 70){
		grade = 'C';
	}else if(score >= 60){
		grade = 'D';
	}else{
		grade = 'F';
	}
	printf("학생 점수: %d\t 등급: %c\n", score, grade);
} 
