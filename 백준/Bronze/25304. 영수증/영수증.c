#include <stdio.h>

int main(void) {
    int total,n; // 총 가격과 총 개수
    int cost, count; // 하나의 가격과 하나의 개수
    int result = 0;
    scanf("%d", &total);
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        scanf("%d %d", &cost, &count);
        result += cost*count;
    }
    
    if (result == total) 
        printf("Yes");
    else
        printf("No");
    
    return 0;
}