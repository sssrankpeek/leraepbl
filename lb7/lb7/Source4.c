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
	case 'a':
	printf("������� �����.\n");
	break;
	case 'b':
		printf("������� �����.\n");
		break;
	case 'c':
		printf("������� �����.\n");
		break;
	case 'd':
		printf("������� �����.\n");
		break;
	case 'e':
		printf("������� �����.\n");
		break;
	case 'f':
		printf("������� �����.\n");
		break;
	case 'g':
		printf("������� �����.\n");
		break;
	case 'h':
		printf("������� �����.\n");
		break;
	case 'i':
		printf("������� �����.\n");
		break;
	case 'j':
		printf("������� �����.\n");
		break;
	case 'k':
		printf("������� �����.\n");
		break;
	case 'l':
		printf("������� �����.\n");
		break;
	case 'm':
		printf("������� �����.\n");
		break;
	case 'n':
		printf("������� �����.\n");
		break;
	case 'o':
		printf("������� �����.\n");
		break;
	case 'p':
		printf("������� �����.\n");
		break;
	case 'q':
		printf("������� �����.\n");
		break;
	case 'r':
		printf("������� �����.\n");
		break;
	case 's':
		printf("������� �����.\n");
		break;
	case 't':
		printf("������� �����.\n");
		break;
	case 'u':
		printf("������� �����.\n");
		break;
	case 'v':
			printf("������� �����.\n");
			break;
	case 2: printf("������� �����.\n");
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