#include <stdio.h>

int main(void) {
    int n; // 반복 횟수 입력받기
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) { // n번 반복
        int a,b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);      
    }
    return 0;
}