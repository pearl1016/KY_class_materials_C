#include <stdio.h>

int main()
{
	int i, n, sum= 0;

	printf("n을 입력하세요: ");
	scanf_s("%d", &n);

	i = 1;
	while (i <= n) {
		sum += i;
		i++;
		//중요한 부분
	}
	printf("sum=%d\n", sum);
}