#include<stdio.h>
int main()
{
	int type;
	double a;
	double b;
	double result;
	printf("��ӭʹ�ü�����\n");
	while (1) {
		printf("��ѡ����������:1.��2.��3.��4.��0.�˳� \n");
		scanf_s("%d", &type);
		while ((type != 1) && (type != 2) && (type != 3) && (type != 4) && (type != 0)) {
			printf("����������������롣\n");
			printf("��ѡ����������:1.��2.��3.��4.��0.�˳� \n");
			scanf_s("%d", &type);
		}
		if (type == 0) {
			break;
		}
		printf("�������һ��������");
		scanf_s("%lf", &a);

		printf("������ڶ���������");
		scanf_s("%lf", &b);
		switch (type)
		{
		case 1:result = a + b; break;
		case 2:result = a - b; break;
		case 3:result = a * b; break;
			while ()
			{


			}

			(b == 0) {
				printf("��ĸ�����������������ڶ���������\n");
				result 
			}
	
		case 4:result = a / b; break;
		}
		printf("���Ϊ:%.2lf\n", result);
	}	
}
