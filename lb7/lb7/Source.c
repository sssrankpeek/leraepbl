#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	char  c, t;
	float x, y;
	printf("Введите букву или цифру: ");
	scanf("%c", &t);
	switch ((t >= 'a' && t <= 'z') || (t >= '1' && t <= '9'))
	{
	case 1:
	printf("Введена буква.\n"); break; case 2: printf("Введена цифра.\n");
	}
	//switch (t >= '1' && t <= '9')
	//{
	//case 1:
	//	printf("Введена цифра.\n");
	//}

	printf("Ваш пример: ");
	scanf("%f%c%f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("Результат: %g", x+y);
		break;
	case '-':
		printf("Результат: %g", x-y);
		break;
	case '/':
		printf("Результат: %g", x/y);
		break;
	case '*':
		printf("Результат: %g", x*y);
		break;
	case '^':
		printf("Результат: %g", pow(x,y));
		break;
	}

}