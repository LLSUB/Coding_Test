#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

//char* solution(int n) {
//	char* answer = (char*)malloc(n);
//	char* add1 = "¼ö";
//	char* add2 = "¹Ú";
//
//
//
//	return answer;
//}

int s(int* a, int* b)
{
	int* temp;

	temp = a;
	b = a;
	a = temp;
}

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	s(&a, &b);

	printf("%d %d\n", b, a);

	return 0;
}