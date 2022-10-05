#include<locale.h>
#include<stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
#define k -4
float sing(float grad)
{
	float result = sin(grad * M_PI / 180);
	return result;
}
float vara(float x)
{
	float a = log(fabs(-k * x));
	return a;
}
float varb(float x)
{
	float b = exp(2 * x) + vara(x) * x;
	return b;
}
float vary(float x)
{
	float y = x * pow((vara(x)), 3) + pow(varb(x), 2);
	return y;
}
void main(void)
{
	float grad, result, x;
	float r1, r2, r3;
	int A, B, C;
	setlocale(LC_ALL, "RUS");
	puts("Программа вычесления синуса");
	puts("Введите градус");
	scanf("%f", &grad);
	result = sing(grad);
	printf("Результат синус %.6f град=%.6f", grad, result);

	puts("Введите x");
	scanf("%f", &x);

	r1 = vara(x);
	r2 = varb(x);
	r3 = vary(x);
	printf("a=%1f,b=%1f,y=%.1f", r1, r2, r3);
	A = (int)r1;
	B = (int)r2;
	C = (int)r3;
	printf("целая часть от а=%d, целая часть от b=%d, целая часть от y=%d\n", A, B, C);
	if (((A % 2 == 0) && (B % 2 != 0)) || ((A % 2 != 0) && (B % 2 == 0)))
	{
		puts("одно из чисел А и В четное: 1\n");
	}
	else
	{
		puts(" одно из чисел А и В четное: 0\n");
	}
	if ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0))
	{
		puts("каждое из чисел А,В,С кратно 3: 1\n");
	}
	else
	{
		puts(" каждое из чисел А,В,С кратно трем: 0\n");
	}