#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    // dp 배열의 각 원소는 1으로 가는 최소 연산 횟수
    int dp[1000001]; // n의 범위가 1~10^6이므로 배열 크기는 10^6 +1
    dp[1] = 0; // 1의 연산횟수는 0
    
    for (int i=2; i<=n; i++) {
        dp[i] = dp[i-1] + 1;
        if (i%2==0) dp[i] = dp[i] < dp[i/2] + 1 ? dp[i] : dp[i/2] + 1;
        if (i%3==0) dp[i] = dp[i] < dp[i/3] + 1 ? dp[i] : dp[i/3] + 1;   
    }
    
    printf("%d", dp[n]);
    return 0;
}