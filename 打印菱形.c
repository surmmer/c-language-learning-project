#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <mmsystem.h>
#include  <stdio.h>
#include <math.h>
//void reverse(char *pa,int size)//��ת�ַ���
//{
//	size--;
//	for(;size >= 0; size--)
//	{
//		printf("%c", *(pa + size));
//	}
//}
//
//
//int main()
//{
//	char ch[] = "abcdef";
//	int sizech = sizeof(ch) / sizeof(ch[0]);
//	reverse(ch, sizeof(ch));
//	return 0;
//}



int main()
{
	int len = 13;//�������ε�����
	for (int i = 1; i <= len; i++)
	{
		int ret = len / 2 + 1;//
		int cont = abs(ret - i);//�ո���
		while(cont--)
		{
			printf(" ");
		}
		cont = len - abs(2*(ret - i));//�Ǻ���
		while(cont--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
