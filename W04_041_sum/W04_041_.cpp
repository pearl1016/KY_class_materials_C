//교수님이 자꾸 외우래

#include <stdio.h>

int main()
{
	int i = 1;
	int n;
	int sum = 0; // 초기화 중요

	printf("n을 입력: ");
	scanf_s(" %d", &n);

	while (i <= n) {
		sum += i;
		i++;
		//중요한 부분
    }
	printf("sum = %d\n", sum);
}