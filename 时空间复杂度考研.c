#include <stdio.h>

//时间复杂度
//算法一 逐步递增型的爱

void loveyou(int n)
{
	int i = 1;
	while (i < n)
	{
		i++;
		printf("Love you %d\n", i);
	}
	printf("love you more than %d\n times", n);
}

int main()
{
	loveyou(3);
}

//算法二 嵌套循环性的爱
void loveyou(int n) //n为问题规模
{
	int i = 1;
	while (i < n)
	{
		i++;
		printf("Love you %d\n", i);
		for (int j = 1; j <= n; j++)
		{
			printf("but\n",i);
		}
	}
	printf("love you more than %d\n", n);
}

//算法三 指数递增的爱
void loveyou(int n) //n为问题规模
{
	int i = 1;
	while (i < n)
	{
		i = i * 2;
		printf("Love you %d\n", i);
	}
	printf("love you more than %d\n", n);
}

//算法四 搜索数字型的爱 遍历查找
void loveyou(int flag[],int n)
{
	printf("I am handsome\n");
	for (int i = 0; i < n; i++)
	{
		if (flag[i] == n)
		{
			printf("Love you %d\n", i);
			break;
		}
	}
}

int main()
{
	int flag[3] = {0};
	loveyou(3);
}

//空间复杂度

void test(int n)
{
	int flag[n][n];
	int other[n];
	int i;

}

//函数递归调用带来的内存开销

//算法五 递归的爱
void loveyou(int n)
{
	int a, b, c;
	if (n > 1)
	{
		loveyou(n - 1);
	}
	printf("I love you%d\n", n);
}

//空间复杂度还要根据递归深度相关的参数决定的情况
void loveyou(int n)
{
	int flag[n];
	if (n > 1)
	{
		loveyou(n - 1);
	}
	printf("I love you%d\n", n);
}

int main()
{
	loveyou(5);
}