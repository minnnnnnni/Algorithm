#include <stdio.h>

int main(void) {
    int m,n; // 입력받을 세자리 정수
    int k3,k4,k5; // 3,4,5번 자리
    scanf("%d", &m);
    scanf("%d", &n);
    
    k3 = m * (n%10);
    k4 = m * ((n%100)/10);
    k5 = m * (n/100);
    
    printf("%d\n", k3);
    printf("%d\n", k4);
    printf("%d\n", k5);
    printf("%d", k3 + k4*10 + k5*100);
    
    return 0;
}