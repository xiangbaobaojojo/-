// ConsoleApplication2.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
	int i = 0;
	int n = 0;
	int x = 0;
	int type;
	char flag;
	int left, right;
	float result1,result2;
	printf("������Ҫ������Ŀ����\n");
	scanf_s("%d", &n);
	srand(unsigned(time(NULL)));
	while (x<n)
	{
		type = rand() % 4;
		left = rand() % 100;
		right = rand() % 100;
		switch (type)
		{
		case 0:
			printf("%d + %d = ?\n", left, right);
			result1 = left + right;
			break;
		case 1:
			printf("%d - %d = ?\n", left, right);
			result1 = left -right;
			break;
		case 2:
			printf("%d * %d = ?\n", left, right);
			result1 = left * right;
			break;
		case 3:
			printf("%d / %d = ?\n", left, right);
			result1 = (float)left / right;
			break;
		}
		printf_s("������𰸣�");
		scanf_s("%f",&result2);
		if (fabs(result1 - result2)<=1e-6)
		{
			printf_s("������ȷ\n");
		}
		else
		{
			printf_s("�������\n");
		}


		i++;
		while (i >= n)
		{
			printf("һ�� %d ��\n", i);
			printf("����?[Y/N]\n");
			fflush(stdin);
			scanf_s("%c", &flag);
			if (flag == 'Y' || flag == 'y')
			{
				printf("������Ҫ������Ŀ����\n");
				scanf_s("%d", &n);
				i = 0;
				break;
			}
			printf("ллʹ�ã�\n");
			fflush(stdin);
			getchar();
			return 0;
		}
	}
}

