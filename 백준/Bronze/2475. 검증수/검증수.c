#include <stdio.h>

int main(void) {
    int a,b,c,d,e; // 처음 5자리 수
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d", (a*a+b*b+c*c+d*d+e*e)%10); // 검증수 출력
    
    return 0;
}