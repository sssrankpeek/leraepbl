#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	char  c, t;
	float x, y;
	printf("������� ����� ��� �����: ");
	scanf("%c", &t);
	switch ((t >= 'a' && t <= 'z') || (t >= '1' && t <= '9'))
	{
	case 1:
	printf("������� �����.\n"); break; case 2: printf("������� �����.\n");
	}
	//switch (t >= '1' && t <= '9')
	//{
	//case 1:
	//	printf("������� �����.\n");
	//}

	printf("��� ������: ");
	scanf("%f%c%f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("���������: %g", x+y);
		break;
	case '-':
		printf("���������: %g", x-y);
		break;
	case '/':
		printf("���������: %g", x/y);
		break;
	case '*':
		printf("���������: %g", x*y);
		break;
	case '^':
		printf("���������: %g", pow(x,y));
		break;
	}

}