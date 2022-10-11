#include <stdio.h>
#include <locale.h>


void main()
{
	setlocale(LC_ALL, "RUS");
	int yeas, X, Y;
	float x, y;
	puts("введите год");
	scanf("%d", &yeas);
	if (((yeas % 4 == 0) || (yeas % 400 == 0)) && (yeas % 100 != 0))
		printf("Год %d високосный", yeas);
	else
		printf("Год %d не високосный", yeas);

	puts("\nвведите х");
	scanf("%f", &x);
	(x > 3) ? printf("%g", y = (-3 * x + 9)) : printf("%g", y = x * x * x / ((x * x) + 8));

	puts("\nвведите первое число:");
	scanf("%d", &X);
	puts("\nвведите второе число:");
	scanf("%d", &Y);
	if (X > Y)
		printf("%d>%d", X, Y);
	if (X < Y)
		printf("%d<%d", X, Y);
	if (X == Y)
		printf("%d=%d", X, Y);


}