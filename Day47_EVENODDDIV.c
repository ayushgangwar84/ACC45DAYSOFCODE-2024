#include <stdio.h>

int count_even_divisors(int N) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0 && i % 2 == 0) {
            count++;
        }
    }
    return count;
}

int count_odd_divisors(int N) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0 && i % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T); 
    
    while (T--) {
        int N;
        scanf("%d", &N);  
        
        int fN = count_even_divisors(N);
        int gN = count_odd_divisors(N);
        
        if (fN > gN) {
            printf("1\n");
        } else if (fN == gN) {
            printf("0\n");
        } else {
            printf("-1\n");
        }
    }
    
    return 0;
}
