#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    int prev[3];
    int curr[3];
    scanf("%d %d %d", &prev[0], &prev[1], &prev[2]);
    
    for (int i=2; i<=n; i++) { // 입력받고 최솟값 업데이트하는 과정을 2번째부터 n번째입력까지 반복
        int r,g,b;
        scanf("%d %d %d", &r, &g, &b);
        
        // 현재 최소비용 계산
        curr[0] = ((prev[1] > prev[2])? prev[2]:prev[1]) + r;
        curr[1] = ((prev[0] > prev[2])? prev[2]:prev[0]) + g;
        curr[2] = ((prev[0] > prev[1])? prev[1]:prev[0]) + b;
        
        // curr을 prev로 업데이트
        prev[0] = curr[0];
        prev[1] = curr[1];
        prev[2] = curr[2];
    }
    
    // prev 배열 중 최솟값 계산 
    int result = prev[0];
    if (prev[1]<result) result = prev[1];
    if (prev[2]<result) result = prev[2];
    
    printf("%d", result);
    
    return 0;
}