#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int  date,mon,years;
	printf("Enter the year:");
	scanf("%d", &years);
	printf("\n Enter the mon:");
	scanf("%d", &mon);
		printf("\n Enter the date:");
	scanf("%d", &date);
	weekday(date,mon,years);
	return 0;
	
	
}
weekday(int date,int month,int year)
{
	int dayWeek,yr,yd;
	yr = year % 100;
	yd = year / 100;
	printf("\nThe Date Given is : %d / %d / %d \n\n", date, month,year);
	dayWeek = 1.25* yr + findm(month, year) + date - 2* (yd % 4);
	dayWeek = dayWeek % 7;
	switch (dayWeek)
	{
		case 0: printf("Day of Week of the Date is: Saturday");
		break;
			case 1: printf("Day of Week of the Date is: Sunday");
		break;
			case 2: printf("Day of Week of the Date is: Monday");
		break;
			case 3: printf("Day of Week of the Date is: Tuesday");
			
		break;
			case 4: printf("Day of Week of the Date is: Wednesday");
		break;
			case 5: printf("Day of Week of the Date is: Thrursday");
		break;
			case 6: printf("Day of Week of the Date is: Friday");
		break;
		default: printf("The Given input data is wrong");
	}
	return 0;
}
int findm(int months, int yearrs)
{
	int findmonth, leapyr;
	if((yearrs % 100 == 0) && (yearrs % 400 !=0))
	leapyr =0;
	else if( yearrs % 4 == 0)
	leapyr = 1;
	else 
	leapyr = 0;
	findmonth = 3 + (2-leapyr)*((months + 2) / (2 * months))+ ( 5 *months + months /9) / 2;
	findmonth = findmonth % 7;
	return findmotnth;
}
