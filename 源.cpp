#include<stdio.h>
int main()
{
	int type;
	double a;
	double b;
	double result;
	printf("欢迎使用计算器\n");
	while (1) {
		printf("请选择运算类型:1.加2.减3.乘4.除0.退出 \n");
		scanf_s("%d", &type);
		while ((type != 1) && (type != 2) && (type != 3) && (type != 4) && (type != 0)) {
			printf("输入错误，请重新输入。\n");
			printf("请选择运算类型:1.加2.减3.乘4.除0.退出 \n");
			scanf_s("%d", &type);
		}
		if (type == 0) {
			break;
		}
		printf("请输入第一个参数：");
		scanf_s("%lf", &a);

		printf("请输入第二个参数：");
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
				printf("分母输入错误，请重新输入第二个参数。\n");
				result 
			}
	
		case 4:result = a / b; break;
		}
		printf("结果为:%.2lf\n", result);
	}	
}
