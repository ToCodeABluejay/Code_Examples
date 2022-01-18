#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getMonth(char *s)
{
	char month[3];
	strncpy(month, s, 2);
	
	return atoi(month);
}

int getDay(char *s)
{
	char day[3];
	for(int i=0, j=2; j<4;i++, j++) day[i]=s[j];
	day[2] ='\0';
	
	return atoi(day);
}

int getYear(char *s)
{
	char year[4];
	for(int i=0, j=4; j<9;i++, j++) year[i]=s[j];
	
	return atoi(year);
}

int main()
{
	char date[9];

	printf("Input the date in the following format MMDDYYYY: ");
	scanf("%s", date);
	
	int day=getDay(date), month=getMonth(date), year=getYear(date);

	if (day>31)
	{
		printf("Incorrect number of days!\n");
		exit(1);
	}
	else if (month>12)
	{
		printf("Incorrect number of months!\n");
		exit(1);
	}

	printf("The date inputted was the following: %d-%d-%d\n", getMonth(date), getDay(date), getYear(date));
}
