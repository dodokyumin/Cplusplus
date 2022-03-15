#include <stdio.h>

int main()
{
	const int END_1 = 31, END_3 = 31, END_4 = 30, END_5 = 31, END_6 = 30, END_7 = 31, END_8 = 31;
	int END_2 = 28;
	const int END_9 = 30, END_10= 31, END_11 = 30, END_12 = 31;
	int inputYear, inputMonth, inputMonthEND;
	int days, dayName;
	
	for(;;) { 
		END_2 = 28;
		printf("연도 : ");
		scanf("%d", &inputYear);
		printf("월 : ");
		scanf("%d", &inputMonth);
		if(inputYear == 0 && inputMonth == 0) {
			break;
		}
		// 1900년 부터 입력받은 inputYear까지 몇년 지났는지 확인
		days = (inputYear - 1900) * 365;
		// 윤년 몇개 있나?
		for(int index = 1901; index < inputYear; index++)
		{
			if( ((index % 4) == 0 && (index % 100) != 0) || ((index % 400) == 0) ) 
			{
				days++; // 윤년이 있는 해에는 366일 이므로.. 
			}
		} 
		if( ((inputYear % 4) == 0 && (inputYear % 100) != 0) || ((inputYear % 400) == 0) ) 
		{
			END_2 = 29;
		}
		// 몇월?
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
		
		// 무슨 요일?
		dayName = days % 7; 
		dayName++; // 0~6(월~일) =>  1~7(월~일) 
		if(dayName == 7)  // 0~6(일~토) 
		{
			dayName = 0;
		} 
		printf("\n               %d 년 %d월\n\n", inputYear, inputMonth);
		printf("%5s %5s %5s %5s %5s %5s %5s\n","일","월","화","수","목","금","토");
		// 앞에 공백 출력
		for(int index = 0; index < dayName; index++) {
			printf("%5s ","");
		} 
		// 월의 마지막날 
		switch(inputMonth) {
			case 12:
				inputMonthEND = END_12;
				break;
			case 11:
				inputMonthEND = END_11;
				break;
			case 10:
				inputMonthEND = END_10;
				break;
			case 9:
				inputMonthEND = END_9;
				break;
			case 8:
				inputMonthEND = END_8;
				break;
			case 7:
				inputMonthEND = END_7;
				break;
			case 6:
				inputMonthEND = END_6;
				break;
			case 5:
				inputMonthEND = END_5;
				break;
			case 4:
				inputMonthEND = END_4;
				break;
			case 3:
				inputMonthEND = END_3;
				break;
			case 2:
				inputMonthEND = END_2;
				break;
			case 1:
				inputMonthEND = END_1;
				break;
		}
		for(int index = 1, enter = dayName + 1; index <= inputMonthEND; index++, enter++) {
			printf("%5d ", index);
			if(enter % 7 == 0) {
				printf("\n");
			}
		}
		printf("\n");	
	}

	
	return 0;
}














