#include <stdio.h>

int main() {
    int T, X, Y, R;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d", &X, &Y, &R);

      
        int extra_sticks = R / 30;

       
        int min_sticks = X + extra_sticks;

      
        int max_full_plates = min_sticks / Y;

       
        int max_plates = max_full_plates + (min_sticks % Y > 0);

        printf("%d\n", max_plates);
    }

    return 0;
}