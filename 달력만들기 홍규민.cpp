#include <stdio.h>

int main(){
	
	int inputYear, inputMonth, days, dayName;
	const int END_1 = 31, END_3 = 31, END_4 = 30,END_5 = 31, END_6 = 31,END_7 = 30,END_8 = 31,END_9 = 30,END_10 = 31,END_11 = 30,END_12 = 31;
	int END_2 = 28;

	
	while(true){
	
		int END_2 = 28; //루프 돌릴 때 계속 변하는 변수 초기화 해주기 
		printf("년도 입력 : ");
		scanf("%d", &inputYear);
		printf("월 입력 : ");
		scanf("%d", &inputMonth);
		if(inputYear == 0 && inputMonth == 0) {
			break;
		}
		
		//1900년 부터 입력받은 inputYear까지 몇년이고 거기에 365곱. 
		days = ((inputYear - 1900) * 365); 
		 
		
		//찾아낸 윤년들 날짜+1 더해주기 
		for(int index = 1901; index < inputYear; index++){
			if( ((index % 4) == 0 && (index % 100) != 0) || ((index % 400) == 0) ){
				days++; 
			}
		} 
		if( ((inputYear % 4) == 0 && (inputYear % 100) != 0) || ((inputYear % 400) == 0) ) {
			END_2 = 29;
		}
	
		int END_00;
		
		switch(inputMonth) {
			case 12:
				days += END_11;
			case 11:
				days += END_10;
			case 10:
				days += END_9;
			case 9:
				days += END_8;
			case 8:
				days += END_7;
			case 7:
				days += END_6;
			case 6:
				days += END_5;
			case 5:
				days += END_4;
			case 4:
				days += END_3;
			case 3:
				days += END_2;
			case 2:
				days += END_1;
		}
			
		
	
		dayName = days % 7; //0~6 월요일~일요일 까지 나옴 
		dayName++; //1~7 월~일 
		
		if(dayName == 7){
			dayName = 0;	//dayName(앞 달의 마지막 날)0~6 일~월 
		} 
		 
		printf("%5s%5s%5s%5s%5s%5s%5s\n","일","월","화","수","목","금","토");//해당 연도의 마지막 날 요일 
		
		for(int index = 0; index < dayName; index++){
			printf("%5s","");
		}
		
		switch(inputMonth){
			case 12 :
				END_00 = END_12;
				break;
			case 11 :
				END_00 = END_11;
				break;
			case 10 :
				END_00 = END_10;
				break;
			case 9 :
				END_00 = END_9;
				break;
			case 8 :
				END_00 = END_8;
				break;
			case 7 :
				END_00 = END_7;
				break;
			case 6 :
				END_00 = END_6;
				break;
			case 5 :
				END_00 = END_5;
				break;
			case 4 :
				END_00 = END_4;
				break;
			case 3 :
				END_00 = END_3;
				break;
			case 2 :
				END_00 = END_2;
				break;
			case 1 :
				END_00 = END_1;
				break;
		}
	
		for (int index = 1, enter = dayName + 1; index <= END_00; index++, enter++){
			printf("%5d",index);
			if(enter % 7 == 0){
				printf("\n");
			}
		}
		printf("\n");
		
	}
	
	return 0;
}
