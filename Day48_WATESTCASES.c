#include <stdio.h>
#include <limits.h> 

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N; 
        scanf("%d", &N);

        int S[N]; 
        char V[N + 1]; 

       
        for (int i = 0; i < N; i++) {
            scanf("%d", &S[i]);
        }

       
        scanf("%s", V);

       
        int min_failed_size = INT_MAX;

        
        for (int i = 0; i < N; i++) {
            if (V[i] == '0') { 
                if (S[i] < min_failed_size) {
                    min_failed_size = S[i]; 
                }
            }
        }

        
        printf("%d\n", min_failed_size);
    }

    return 0;
}
