#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i;
    
    if (n%2==1) { // n이 홀수라면
        for (i=1;i<=n;i+=2) {
            answer += i;
        }
    } else { // n이 짝수라면
        for (i=2;i<=n;i+=2) {
            answer += i*i;  
        }
    }
    
    return answer;
}