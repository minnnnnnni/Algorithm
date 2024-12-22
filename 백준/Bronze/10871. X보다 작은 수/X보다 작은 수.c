#include <stdio.h>

int main(void) {
    int n,x;
    int input;
    scanf("%d %d", &n,&x);
    
    for (int i=0; i<n; i++) {
        scanf("%d", &input);
        if (x>input) printf("%d ", input);
    }
    
    return 0;
}