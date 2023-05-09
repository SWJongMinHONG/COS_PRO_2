#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int a,int b)
{
	int answer = 0;

	for (int i = 0;i < a * b;i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			answer = i;
			break;
		}
	}
	return answer;
}

int main()
{
	int a = 4;
	int b = 6;
	int ret = solution(a, b);

	printf("solution 함수의 반환 값은 %d 입니다.", ret);
}