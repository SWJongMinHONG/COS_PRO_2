#include<stdio.h>
#include<string.h>

int main()
{
	//aaa�� ascii �ڵ�� 97 97 97
	//aab�� ascii �ڵ�� 97 97 98
	//aac�� ascii �ڵ�� 97 97 99

	printf("%d\n", strcmp("aaa", "aaa"));
	printf("%d\n", strcmp("aab", "aaa"));
	printf("%d\n", strcmp("aab", "aac"));



	return 0;
}