#include <stdio.h>

int main()
{
	// *를 n개 출력하기 
	// n은 입력 받는다

	int i = 1;
	int n;
	//int i, n; 도 가능

	printf("*를 출력할 갯수를 적으세요: ");
	scanf_s("%d", &n);
	
	while (i <= n) {
		printf("*");
		i++;
	}
}