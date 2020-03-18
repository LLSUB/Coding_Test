#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s)
{
	int i, j;
	char* answer = (char*)malloc(sizeof(s));
	char temp;

	strcpy(answer, s);

	for (i = 0; i < strlen(s); i++)
	{
		for (j = i + 1; j < strlen(s); j++)
		{
			if (answer[i] < answer[j])
			{
				temp = answer[j];
				answer[j] = answer[i];
				answer[i] = temp;
			}
		}
	}

	return answer;
}

int main()
{
	char input[100];

	scanf("%s", input);

	printf("%s\n", solution(input));
}