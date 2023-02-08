#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int solution(int price, const char grade)
{
	int answer = 0;
	double percent;
	int sale;
	if (grade == 'S')
	{
		percent = 0.05;
		sale = price * percent;
		answer = price - sale;
	}
	if (grade == 'G')
	{
		percent = 0.1;
		sale = price * percent;
		answer = price - sale;
	}
	if (grade == 'V')
	{
		percent = 0.15;
		sale = price * percent;
		answer = price - sale;
	}
	
	return answer;
}


int main(void) {
	int price1 = 2500;
	int price2 = 96900;
	char grade1 ='S';
	char grade2 ='G';
	char grade3 ='V';
	
	int ret = solution(price1, grade3);
	printf("할인된 값:%d",ret);

	
}