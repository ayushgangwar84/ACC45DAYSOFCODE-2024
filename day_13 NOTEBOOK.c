#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N; 
        scanf("%d", &N);
        
        int total_pages = N * 1000;
        
        int notebooks = total_pages / 100;
    
        printf("%d\n", notebooks);
    }

    return 0;
}
