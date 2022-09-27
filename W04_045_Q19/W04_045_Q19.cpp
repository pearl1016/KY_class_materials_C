#include <stdio.h>

int main()
{
	int evensum = 0;
	int oddsum = 0;
	int n, i;

	printf("n을 입력하세요: ");
	scanf_s("%d", &n);

	i = 1;
	while (i <= n) {
		if (i % 2 == 0)
			evensum += i;
		else
			oddsum += i;
		i++;

	}
	printf("홀수의 합: %d\n", oddsum);
	printf("짝수의 합: %d", evensum);
}