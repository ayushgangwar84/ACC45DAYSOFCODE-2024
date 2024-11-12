#include <stdio.h>

int main() {
    int T, X, Y, max_people;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &X, &Y);

        
        max_people = X / (2 * Y);

        printf("%d\n", max_people);
    }

    return 0;
}