#include <stdio.h>

int main()
{
	int n;

	printf("n을 입력: ");
	scanf_s("%d", &n);

	int i, pow; // sum = 0;
	for (i = 1, pow = 1; i <= n; i++, pow *= 2); // 2를 n번 곱한다
	    printf("2의 %d제곱은 %d\n", n, pow);
}