#include <stdio.h>

int main()
{
	int n;

	printf("n을 입력: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i+=2) {
        for (int j = 1; j <= i; j++)
		    printf("*");
        printf("\n");
	}
}

//*
//***
//*****
//*******
//i = 1~5
//j = 1~2*1-1
for (int i = 1; i <= n; i += 2) {
	for (int j = 1; j <= 2 * 1 - 1; j++)
		printf("*");
	printf("\n");