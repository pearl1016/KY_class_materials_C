#include <stdio.h>

int main()
{
	int n;
	int sum = 0;
	int evensum = 0;
	int oddsum = 0;
	int i; //반복변수
	

	//반복문 : 초기, 끝, 변화

	printf("자연수를 입력하시오: ");
    scanf_s("%d", &n);

    i = 1; //초기
	while (i <= n) { //끝
		sum += i;
		if (i % 2 == 0)
			evensum += i;
		else
			oddsum += i;
		i++; //변화

	}
	printf("합: %d\n", sum);
	printf("홀수의 합: %d\n", oddsum);
	printf("짝수의 합: %d", evensum);

}
