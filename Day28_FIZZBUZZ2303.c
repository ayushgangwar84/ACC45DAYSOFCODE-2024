#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int N; 
        scanf("%d", &N);
        
      
        int choices = N * (N - 1);
        
      
        printf("%d\n", choices);
    }
    
    return 0;
}