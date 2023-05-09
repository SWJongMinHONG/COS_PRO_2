#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(double speed, int cars[], int cars_len)
{
	int answer = 0;

	for (int i = 0;i < cars_len;i++)
	{
		if ((float)(speed * 1.2) > cars[i]&& cars[i] >= (float)(speed * 1.1))
		{
			answer += 3;
		}
		else if ((float)(speed * 1.3) > cars[i]&&cars[i] >= (float)(speed * 1.2))
		{
			answer += 5;
		}
		else if (cars[i] >= (float)(speed * 1.3))
		{
			answer += 7;
		}
	}

	return answer;
}

int main()
{
	double speed = 100;
	int cars[] = { 110,98,125,148,120,112,89 };
	int cars_len = 7;
	int ret = solution(speed, cars, cars_len);

	printf("solution함수의 반환 값은 %d 입니다", ret);
	return 0;
}



