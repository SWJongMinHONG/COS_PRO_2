#include <stdio.h>

int func_a(int month, int day) {
	int month_list[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int total = 0;
	int sum;
	for (int i = 0; i < month - 1; i++) {
		total += month_list[i];
	}
	sum = total + day;
	return sum;
}

int func_b(int start_month, int start_day, int end_month, int end_day) {
	
	int smd = func_a(start_month, start_day);
	int emd = func_a(end_month, end_day);
	int answer;
	return answer;
}

int main(void) {

	int start_month = 1;
	int start_day = 2;
	int end_month = 2;
	int end_day = 2;
	int ret = func_b(start_month, start_day, end_month, end_day);
	printf("%d\n", ret);
}