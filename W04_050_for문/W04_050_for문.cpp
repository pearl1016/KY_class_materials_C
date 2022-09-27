// for 문을 사용 할 때 주의해야할 점
#include <stdio.h>

int main()
{
	int i= 100; 

	for (int i = 0; i < 10; i++)
		printf("for : %d\n", i);
	printf("%d\n", i); //에러 발생

}