#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
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