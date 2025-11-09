#include "rps.h"
#include <string.h>

const char* analyzeRPS(const char* player1, const char* player2) {
    if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0)
        return "Player1";
    
    return "Invalid";
}