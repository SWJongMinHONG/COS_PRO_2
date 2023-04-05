#define _CRT_SECURE_NO_WARNINGS	

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// name_list_m은 name_list에 들어있는 문자열의 개수입니다.
int solution(char* name_list[], size_t name_list_m) {
    int answer = 0;
    for (int i = 0; i < name_list_m; ++i)
        for (int j = 0; name_list[i][j] != 0; ++j)
            if (name_list[i][j] == 'j' || name_list[i][j] == 'k') {
                answer++;
                break;
            }
    return answer;
}

int main()
{
    char* name_list[] = { "james", "luke", "oliver", "jack"};
    int len = sizeof(name_list) / sizeof(name_list[0]);
    int result = solution(name_list, len);
    printf("%d\n", result);
    return 0;
}
