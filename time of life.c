#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>
int main()
{
	time_t timep;
	struct tm *p;
	time(&timep);
	p = gmtime(&timep);
	int year,month,day;
	int sum=0,sum1=0,year1;
	int arr[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int arr1[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("请输入你的出生日期(1988-12-6)：\n");
	scanf("%d-%d-%d", &year,&month,&day); 
	printf("现在日期为：%d-%d-%d\n",1900+p->tm_year,1+p->tm_mon,p->tm_mday);
	if(year % 400 == 0 || (year % 4 ==0 && year % 100 != 0))
	{
		arr1[1] = 29;

	}
	if (1900 + p->tm_year % 400 == 0 || (1900 + p->tm_year % 4 == 0 && 1900 + p->tm_year % 100 != 0))
	{
		arr[1] = 29;

	}
	for(int i = 0;i < month;i++)
	{
		sum1 += arr1[i]; 
	}
	for (int i = 0; i < 1 + p->tm_mon; i++)
	{
		sum += arr[i];
	}

	sum -= sum1;
	year1 = (1900 + p->tm_year) - year;
	year++;
	for (; year <= 1900 + p->tm_year; year++)
	{
		if ( year % 400 == 0 || (year % 4 == 0 &&  year % 100 != 0))
		{
			sum += 366;
		}
		else
			sum += 365;
	}
	sum += (p->tm_mday-day)+1;

	printf("你一共生活了%d天", sum);
	return 0;
}
