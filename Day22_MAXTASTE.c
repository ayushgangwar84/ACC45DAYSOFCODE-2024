#include <stdio.h>

int main() {
    int T;
   
    scanf("%d", &T);
    
    while (T--) {
        int a, b, c, d;
       
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        
        int maxTastiness = (a > b ? a : b) + (c > d ? c : d);
        
       
        printf("%d\n", maxTastiness);
    }
    
    return 0;
}