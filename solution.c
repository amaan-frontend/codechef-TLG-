#include <stdio.h>

int main() {
    int numRounds, i;
    scanf("%d", &numRounds);

    int maxLead = 0;
    int winner = 0;

    int player1Score = 0;
    int player2Score = 0;

    for (i = 0; i < numRounds; i++) {
        int player1, player2;
        scanf("%d %d", &player1, &player2);

        player1Score += player1;
        player2Score += player2;

        int lead = player1Score - player2Score;
        if (lead > maxLead) {
            maxLead = lead;
            winner = 1;  // Player 1 is leading
        } else if (-lead > maxLead) {
            maxLead = -lead;
            winner = 2;  // Player 2 is leading
        }
    }

    printf("%d %d\n", winner, maxLead);

    return 0;
}

