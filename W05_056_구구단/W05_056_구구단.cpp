#include <stdio.h>

//구구단(5단)
/*
5*1 = 5
5*2 = 20
5*3 = 15

..
5*9 = 45
두번째 숫자가 1~9까지 변화(반복문 1개 필요)
*/
 
int main()
{

	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 5; j++)
			printf("%dX%d=%d\t", j, i, i * j);
		printf("\n");
	}
	printf("\n");

	for (int i = 1; i <= 9; i++) {
		for (int j = 6; j <= 9; j++)
			printf("%dX%d=%d\t", j, i, i * j);
		printf("\n");
	}
}