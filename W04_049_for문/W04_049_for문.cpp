#include <stdio.h>

int main()
{
	int n;

	printf("n을 입력: ");
	scanf_s("%d", &n);

	//int sum = 0; //초기화
	//for (int i = 1; i <= n; i++)
	//   sum += i;

	int sum = 0;
	int i = 1;
	while (i <= n) {
		sum += i;
		i++;
		
	// 무한 루프
		while (true); {
		}

		for (;;)
			printf("Hello\n")
	}

	printf("1에서 %d까지의 합 = %d\n", n, sum);

	//10 번 반복
	// for (int i = 0; i < 10; i++)
	//     printf("Hello\n")
	// printf("\n\n")
	// for (int i = 1; i <= 1-; i++);
	// printf("Hello\n")
}