#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
       
        int distance = abs(X - Y);
        
       
        int time_to_catch = distance; 
        
        printf("%d\n", time_to_catch);
    }
    
    return 0;
}
