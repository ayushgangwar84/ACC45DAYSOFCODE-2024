#include <stdio.h>

int main() {
    int T;
    
   
    scanf("%d", &T);
    
    while (T--) {
        int A, B;
       
        scanf("%d %d", &A, &B);
        
    
        int required = 21 - (A + B);
        
     
        if (required >= 1 && required <= 10) {
            printf("%d\n", required);
        } else {
            printf("-1\n");
        }
    }
    
    return 0;
}