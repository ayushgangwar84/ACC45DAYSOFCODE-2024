#include <stdio.h>

int main() {
    int T, N;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

      
        int full_weeks = N / 7;

    
        int remaining_days = N % 7;

     
        int extra_tuesday = remaining_days >= 2 ? 1 : 0;

      
        int total_tuesdays = full_weeks + extra_tuesday;

        printf("%d\n", total_tuesdays);
    }

    return 0;
}