#include <stdio.h>

void encodeBinaryString(int N, char *S) {
    for (int i = 0; i < N; i += 2) {
       
        if (S[i] == '0' && S[i + 1] == '0') {
            printf("A");
        } else if (S[i] == '0' && S[i + 1] == '1') {
            printf("T");
        } else if (S[i] == '1' && S[i + 1] == '0') {
            printf("C");
        } else if (S[i] == '1' && S[i + 1] == '1') {
            printf("G");
        }
    }
    printf("\n");
}

int main() {
    int T;  
    scanf("%d", &T);

    while (T--) {
        int N;  
        scanf("%d", &N);

        char S[N + 1];  
        scanf("%s", S);

        encodeBinaryString(N, S);
    }

    return 0;
}
