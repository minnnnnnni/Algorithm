#include <stdio.h>

int main(void) {
    int n;
    int sum=0;
    scanf("%d", &n); // 1부터 n까지 더할 n 입력받기
   
    for (int i=1; i<=n; i++) { // 1부터 n까지 더하기
        sum +=i;
    }
    printf("%d", sum);
    return 0;
}