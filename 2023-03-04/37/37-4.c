
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char s1[20];
	char s2[20];

	printf("���ڿ��� �ΰ� �Է��Ͻÿ�: ");
	scanf("%s %s", s1, s2);

	int ret = strcmp(s1, s2);

	switch (ret)
	{
	case 0:
		printf("�� ���ڿ� ����\n");
	case 1:
		printf("%s���� %s�� ŭ\n",s2,s1);
	case -1:
		printf("%s���� %s�� ŭ\n", s1, s2);
	}

	return 0;
}