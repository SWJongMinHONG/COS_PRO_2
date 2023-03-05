
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char s1[20];
	char s2[20];

	printf("문자열을 두개 입력하시오: ");
	scanf("%s %s", s1, s2);

	int ret = strcmp(s1, s2);

	switch (ret)
	{
	case 0:
		printf("두 문자열 같음\n");
	case 1:
		printf("%s보다 %s가 큼\n",s2,s1);
	case -1:
		printf("%s보다 %s가 큼\n", s1, s2);
	}

	return 0;
}