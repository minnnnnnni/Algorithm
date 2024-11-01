#include <stdio.h>

int main(void) {
    int a,b;
    
    while(1) {
        scanf("%d %d", &a, &b);
        if (a==0 && b==0) // 0이 두 번 입력되면 반복문 종료
            break;
        if (a%b==a && b%a==0) {
            printf("factor\n");
        } else if (a%b==0 && b%a==b) {
            printf("multiple\n");
        } else {
            printf("neither\n");
        }
    }
    return 0;
}