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

	printf("soultion �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
