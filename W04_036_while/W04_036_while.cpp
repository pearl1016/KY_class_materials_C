//정수 2개를 입력받고, 세번째 숫자를 입력받아,
//두 수 사이의 세번째 숫자의 배수를 출력하세요


// 숫자 3개 입력 받기 : a,b,c
// i = a;
// while(i<=b) {
//  if(i%n == 0)
//      print()
//  i++;


#include <stdio.h>

int main()
{
	int a, b, n;
    printf("a~b까지 n의 배수: ");
	scanf_s("%d %d %d", &a, &b, &n);

	int i = a;
	while (i <= b) {
		if (i % n == 0)
			printf("%d ", i);
		i++;
	}
	printf("\n");

}