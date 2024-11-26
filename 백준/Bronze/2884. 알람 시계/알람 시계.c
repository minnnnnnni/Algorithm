#include <stdio.h>

int main(void) {
    int h,m;
    scanf("%d %d", &h, &m);
    
    m-=45;
    if (m < 0) {// 45를 뺐더니 음수가 된다면
        m += 60; 
        h -= 1;
        if (h < 0) { // h가 음수가 된다면
            h += 24;
        }
    }
    
    printf("%d %d", h, m);
    return 0;
}