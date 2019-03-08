/*
 * src/ch_5/multi_array.c
 *
 * 2019/2/21
 */


static char daytab[2][13] = {
	{ 0, 13, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
	{ 0, 13, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};


/*
 * 将某月某日的日期表示形式转换为某年中第几天的表示形式
 */
int day_of_year(int year, int month, int day)
{
	int i, leap;

	leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	for (i = 1; i < month; i++)
		day += daytab[leap][i];
	return day;
}


/*
 * 将某年中第几天的日期表示形式转换为某月某日的表示形式
 */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
	int i, leap;

	leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	for (i = 1; yearday > daytab[leap][i]; i++)
		yearday -= daytab[leap][i];
	*pmonth = i;
	*pday = yearday;
}
