#include <stdio.h>

//ʱ�临�Ӷ�
//�㷨һ �𲽵����͵İ�

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

//�㷨�� Ƕ��ѭ���Եİ�
void loveyou(int n) //nΪ�����ģ
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

//�㷨�� ָ�������İ�
void loveyou(int n) //nΪ�����ģ
{
	int i = 1;
	while (i < n)
	{
		i = i * 2;
		printf("Love you %d\n", i);
	}
	printf("love you more than %d\n", n);
}

//�㷨�� ���������͵İ� ��������
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

//�ռ临�Ӷ�

void test(int n)
{
	int flag[n][n];
	int other[n];
	int i;

}

//�����ݹ���ô������ڴ濪��

//�㷨�� �ݹ�İ�
void loveyou(int n)
{
	int a, b, c;
	if (n > 1)
	{
		loveyou(n - 1);
	}
	printf("I love you%d\n", n);
}

//�ռ临�ӶȻ�Ҫ���ݵݹ������صĲ������������
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