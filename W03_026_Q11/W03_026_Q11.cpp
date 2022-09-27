#include <stdio.h>

int main()
{
	int x = 3;
	int y = 4;

	bool p = x && y;
	bool q = x || y;
	bool r = !x;
	bool s = !y;

	//c언어에서 0은거짓, 0이 아닌 모든 숫자는 참
	//출력할때는 참은 1, 겨짓은 0으로 출력한다
	printf("x && y = %d\n", p);
	printf("x || y = %d\n", q);
	printf("!x = %d\n", r);
	printf("!y = %d\n", s);

}

//사진 확인
