#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int W, X, Y, Z;
        scanf("%d %d %d %d", &W, &X, &Y, &Z);
        
        
        if (W == X || W == Y || W == Z) {
            printf("YES\n");
            continue;
        }
        
        
        if (W == X + Y || W == X + Z || W == Y + Z) {
            printf("YES\n");
            continue;
        }
        
        
        if (W == X + Y + Z) {
            printf("YES\n");
            continue;
        }
        
        
        printf("NO\n");
    }
    
    return 0;
}
