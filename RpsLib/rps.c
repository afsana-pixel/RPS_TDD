#include "rps.h"
#include <string.h>

const char* analyzeRPS(const char* player1, const char* player2) {
    
    //Invalid Input
    if ((strcmp(player1, "Rock") != 0 && strcmp(player1, "Paper") != 0 && strcmp(player1, "Scissors") != 0) ||
        (strcmp(player2, "Rock") != 0 && strcmp(player2, "Paper") != 0 && strcmp(player2, "Scissors") != 0))
        return "Invalid";

    //Draw
    if (strcmp(player1, player2) == 0)
        return "Draw";

    //Player1 Wins
    if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0)
        return "Player1";

    //Player2 Wins
	return "Player2";

}