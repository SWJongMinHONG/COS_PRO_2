#include<stdio.h>

int solution(int korean, int english)
{
	
	int answer = 0;
	answer = 210 - (korean + english);
	
	return answer;
}
int main(){

	int korean = 70;
	int english = 60;
	int ret = solution(korean, english);

	printf("soultion 함수의 반환 값은 %d 입니다.\n", ret);
}
