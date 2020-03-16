#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* s) {
	char* answer = (char*)malloc(5);
	int len = strlen(s);

	if (len % 2 == 0)
	{
		strncpy(answer, s + (len / 2 - 1), 2);
		answer[2] = "\0";
	}
	else
	{
		strncpy(answer, s + (len / 2), 1);
		answer[1] = '\0';
	}

	return answer;
}

//char* solution(const char* s) {
//	char* answer = malloc(5);
//	char data1[2] = "0";
//	char data2[3] = "00";
//	int len;
//
//	printf("%s\n", answer);
//	len = strlen(s);
//
//	printf("%d\n", len);
//
//	if (len % 2 == 0)
//	{
//		answer = data2;
//		strncpy(answer, s + (len / 2 - 1), 2);
//		printf("%s\n", answer);
//
//		/*strcpy(answer, s[(len / 2) - 1]);
//		strcpy(plus, s[len / 2]);
//		strcat(answer, plus);
//
//		printf("%s", answer);*/
//
//		return answer;
//	}
//	else
//	{
//		answer = data1;
//		strncpy(answer, s + 2, 1);
//		printf("%s\n", answer);
//
//
//		/*strcpy(answer, s[len / 2]);*/
//		return answer;
//	}
//}

int main()
{
	char input[101];

	scanf("%s", input);

	printf("%s", solution(input));

	return 0;
}