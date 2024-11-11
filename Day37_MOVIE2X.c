#include <stdio.h>

int main() {
    int X, Y;

    scanf("%d %d", &X, &Y);

    
    int firstHalfTime = Y / 2;

 
    int secondHalfTime = X - Y;

   
    int totalTime = firstHalfTime + secondHalfTime;

    printf("%d\n", totalTime);

    return 0;
}