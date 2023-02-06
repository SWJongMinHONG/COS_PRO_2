//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int i,j = 0;
int rank = 0;
//int c[8];

int *rank_ch(int* a) {
	int b[8];
	static int c[8];
	for (i = 0; i < 8; i++) {
		 b[i] = a[i];
	}

	for (i = 0; i < 8; i++) {
		for (j = i + 1; j < 8; j++) {
			if (b[i] < b[j]) {
				rank = b[i];
				b[i] = b[j];
				b[j] = rank;
			}
		}
	}

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (a[i] == b[j]) {
				c[i] = j + 1;
				break;
			}
		}
	}
	return c;
}

int main(void) {
	int score[8] = { 90,87,87,23,35,28,12,46 };
	int* student_rank = rank_ch(score);

	printf("[");
	for (i = 0; i < 8; i++) {
		printf(" %d ", student_rank[i]);
	}
	printf("]");

	return 0;
}