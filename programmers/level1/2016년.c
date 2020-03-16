#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

char* solution(int a, int b) 
{
	char* dates[7] = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };
	char* answer = (char*)malloc(4);
	int total_date = 0;
	int i = 0;
	
	for (i = 1; i < a; i++) 
	{
		switch (i) 
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			total_date += 31;
			break;
		case 2:
			total_date += 29;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			total_date += 30;
			break;
		}
	}

	total_date += b;

	answer = dates[total_date % 7];

	return(answer);
}

int main() 
{
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%s", solution(a, b));
}