#include <stdio.h>

int main()
{
	int n;
	int sum = 0, evensum = 0, oddsum = 0;
	


	//반복문 : 초기, 끝, 변화

	printf("자연수를 입력하시오: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum += i;
		if (i % 2 == 0)
			evensum += i;
		else
			oddsum += i;

	}
	printf("합 = %d\n 짝수의 합은 %d\n 홀수의 합 = %d\n", sum, evensum, oddsum);
}
