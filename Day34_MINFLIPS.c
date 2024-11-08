#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    while (T--) {
        int N;
        scanf("%d", &N); 
        int count_1 = 0, count_neg1 = 0;

      
        for (int i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);
            if (num == 1) {
                count_1++;
            } else {
                count_neg1++;
            }
        }

       
        int sum = count_1 - count_neg1;

     
        if (sum % 2 != 0) {
            
            printf("-1\n");
        } else if (sum == 0) {
          
            printf("0\n");
        } else {
           
            printf("%d\n", abs(sum) / 2);
        }
    }

    return 0;
}