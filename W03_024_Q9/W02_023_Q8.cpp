#include <stdio.h>

int main()
{
	float a;
	a = 9.8;

	float b;
	b = 3.14;

	printf("%3.2f + %3.2f = %3.2f\n", a, b, a + b);
	printf("%3.2f - %3.2f = %3.2f\n", a, b, a - b);
	printf("%3.2f * %3.2f = %3.2f\n", a, b, a * b);
	printf("%3.2f / %3.2f = %3.2f\n", a, b, a / b);
}
