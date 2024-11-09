#include <stdio.h>
#include <math.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);

        
        int rounds = log2(N);
        
        
        int totalTime = 0;
        
        
        totalTime += rounds * A;
        

        if (rounds > 1) {
            totalTime += (rounds - 1) * B;
        }
        
        printf("%d\n", totalTime);
    }
    
    return 0;
}
