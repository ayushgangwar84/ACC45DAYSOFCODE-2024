#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y);

        int regular_attacks = (H + X - 1) / X;

        int health_after_special = H - Y;
        
        int attacks_after_special = (health_after_special + X - 1) / X; 
       
        int total_attacks_with_special = 1 + attacks_after_special; 
        
        int min_attacks = regular_attacks < total_attacks_with_special ? regular_attacks : total_attacks_with_special;

        printf("%d\n", min_attacks);
    }

    return 0;
}

