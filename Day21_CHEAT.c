#include <stdio.h>

int main() {
    int T, N;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

      
        int full_weeks = N / 7;

       
        int remaining_days = N % 7;

        
        int tuesdays_in_full_weeks = full_weeks;

       
        int tuesdays_in_remaining_days = 0;
        if (remaining_days >= 2) {
            tuesdays_in_remaining_days = 1;
        }

       
        int total_tuesdays = tuesdays_in_full_weeks + tuesdays_in_remaining_days;

        printf("%d\n", total_tuesdays);
    }

    return 0;
}