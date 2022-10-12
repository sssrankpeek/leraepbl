#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	char  c, t;
	float x, y;
	printf("¬ведите букву или цифру: ");
	scanf("%c", &t);
	switch ((t >= 'a' && t <= 'z') || (t >= '1' && t <= '9'))
	{
	case 'a':
	printf("¬ведена буква.\n");
	break;
	case 'b':
		printf("¬ведена буква.\n");
		break;
	case 'c':
		printf("¬ведена буква.\n");
		break;
	case 'd':
		printf("¬ведена буква.\n");
		break;
	case 'e':
		printf("¬ведена буква.\n");
		break;
	case 'f':
		printf("¬ведена буква.\n");
		break;
	case 'g':
		printf("¬ведена буква.\n");
		break;
	case 'h':
		printf("¬ведена буква.\n");
		break;
	case 'i':
		printf("¬ведена буква.\n");
		break;
	case 'j':
		printf("¬ведена буква.\n");
		break;
	case 'k':
		printf("¬ведена буква.\n");
		break;
	case 'l':
		printf("¬ведена буква.\n");
		break;
	case 'm':
		printf("¬ведена буква.\n");
		break;
	case 'n':
		printf("¬ведена буква.\n");
		break;
	case 'o':
		printf("¬ведена буква.\n");
		break;
	case 'p':
		printf("¬ведена буква.\n");
		break;
	case 'q':
		printf("¬ведена буква.\n");
		break;
	case 'r':
		printf("¬ведена буква.\n");
		break;
	case 's':
		printf("¬ведена буква.\n");
		break;
	case 't':
		printf("¬ведена буква.\n");
		break;
	case 'u':
		printf("¬ведена буква.\n");
		break;
	case 'v':
			printf("¬ведена буква.\n");
			break;
	case 2: printf("¬ведена цифра.\n");
	}
	//switch (t >= '1' && t <= '9')
	//{
	//case 1:
	//	printf("¬ведена цифра.\n");
	//}

	printf("¬аш пример: ");
	scanf("%f%c%f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("–езультат: %g", x+y);
		break;
	case '-':
		printf("–езультат: %g", x-y);
		break;
	case '/':
		printf("–езультат: %g", x/y);
		break;
	case '*':
		printf("–езультат: %g", x*y);
		break;
	case '^':
		printf("–езультат: %g", pow(x,y));
		break;
	}

}