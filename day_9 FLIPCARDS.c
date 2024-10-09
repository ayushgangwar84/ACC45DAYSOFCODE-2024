#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    while (T--) {
        int N, X; 
        scanf("%d %d", &N, &X);
        
        int faceDown = N - X;
        
        int minFlips = (X < faceDown) ? X : faceDown;
        
        printf("%d\n", minFlips);
    }
    
    return 0;
}
