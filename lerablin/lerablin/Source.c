#include <stdio.h>
#include <locale.h>
#include <math.h>
#define s 50
#define t 1
double sk(double m)
{
	double skorost = ((s * m) / t) / 1000 * 60;
	return skorost;
}


void main(void)
{
	setlocale(LC_ALL, "RUS");
	double m, res;
	puts("������� ���-�� �������");
	scanf("%lf", &m);
	res = sk(m);
	printf("�������� %.lf �� �", res);
}