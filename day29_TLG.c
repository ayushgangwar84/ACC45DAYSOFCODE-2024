#include <stdio.h>

int main() {
    int N; 
    scanf("%d", &N);

    int player1_score = 0, player2_score = 0;
    int winner = 0, max_lead = 0;

    for (int i = 0; i < N; i++) {
        int Si, Ti;
        scanf("%d %d", &Si, &Ti);

       
        player1_score += Si;
        player2_score += Ti;

     
        int leader, lead;
        if (player1_score > player2_score) {
            leader = 1;
            lead = player1_score - player2_score;
        } else {
            leader = 2;
            lead = player2_score - player1_score;
        }

     
        if (lead > max_lead) {
            max_lead = lead;
            winner = leader;
        }
    }

 
    printf("%d %d\n", winner, max_lead);
    return 0;
}