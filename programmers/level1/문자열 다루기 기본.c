#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
bool solution(const char* s) {
	bool answer = true;
	int i;

	if (strlen(s) != 4 && strlen(s) != 6)
	{
		return false;
	}

	for (i = 0; i < strlen(s); i++)
	{
		if (57 < s[i] || 48 > s[i])
		{
			return false;
		}
	}

	return true;
}

int main()
{
	char data[10];

	scanf("%s", data);
	
	if (solution(data))
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}

	return 0;
}