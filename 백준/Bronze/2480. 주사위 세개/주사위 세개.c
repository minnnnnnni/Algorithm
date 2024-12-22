#include <stdio.h>
#define max(x,y) ((x) > (y) ? (x) : (y))

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("%d", 10000 + a * 1000); // 세 숫자가 모두 같은 경우
    } else if (a == b || a == c) {
        printf("%d", 1000 + a * 100);  // 두 숫자가 같은 경우 (a와 b, 또는 a와 c)
    } else if (b == c) {
        printf("%d", 1000 + b * 100);  // 두 숫자가 같은 경우 (b와 c)
    } else {
        printf("%d", max(max(a, b), c) * 100); // 모두 다른 경우
    }

    return 0;
}
