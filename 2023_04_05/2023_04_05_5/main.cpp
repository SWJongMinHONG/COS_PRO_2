#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>


/*int solution(int** arr, size_t arr_row_len, size_t arr_col_len, int k) {
    int answer = 0;
    arr_row_len = 4;
    arr_col_len = 4;
    int a = 0;
    int arrsize = 16;
    int* arr2 = (int*)malloc(sizeof(int) * (arrsize));

    for (int i = 0; i < arr_row_len; i++)
    {
        for (int j = 0; j < arr_col_len; j++)
        {
            arr2[a++] = arr[i][j];
        }
    }
    
    return answer;
}
*/
void selectionSort(int arr[], int size) {
    int i, j, min_idx, temp;

    for (i = 0; i < size - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}
int solution(int(* arr)[4], size_t arr_row_len, size_t arr_col_len, int k) {
    int answer = 0;
    arr_row_len = 4;
    arr_col_len = 4;
    int a = 0;
    int arrsize = 16;
    int* arr2 = (int*)malloc(sizeof(int) * (arrsize));

    for (int i = 0; i < arr_row_len; i++)
    {
        for (int j = 0; j < arr_col_len; j++)
        {
            arr2[a++] = arr[i][j];
        }
    }
    for (int k = 0; k < arrsize; k++)
    {
        selectionSort(arr2, arrsize);
        //printf("%d  ", arr2[k]);

    }
    answer = arr2[k-1];
    return answer;
}



int main()
{
    int arr[4][4] = { {5,12,4,31},{24,13,11,2},{43,44,19,26},{33,65,20,21} };
    int answer = 0;
    int arr_row_len = 4;
    int arr_col_len = 4;
    int a = 0;
    int k = 4;
    int arrsize = 16;
    int* arr2 = (int*)malloc(sizeof(int) * (arrsize));
    a = solution(arr, arr_row_len, arr_col_len, k);
    printf("%d", a);
    return 0;
}