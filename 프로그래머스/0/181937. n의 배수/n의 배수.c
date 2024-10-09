#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int n) {
    int answer = 0;
    if (num%n ==0) // num이 n의 배수이면
        answer = 1;
    else
        answer =0;
    return answer;
}