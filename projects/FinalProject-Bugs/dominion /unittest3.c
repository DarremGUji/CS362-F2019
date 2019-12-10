#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main () {

    // Set up function inputs
    struct gameState g;
    memset(&g, 0, sizeof(struct gameState));
    int bonus = 0;

    // Elements of gamestate
    g.whoseTurn = 0;
    g.handCount[0] = 2;
    g.discardCount[0] = 0;
    g.supplyCount[outpost] = 10;
    g.numPlayers = 2;
    g.playedCardCount = 0;

    // Set up player's hand
    g.hand[0][0] = remodel;
    g.hand[0][1] = embargo;

    // Call function
    int e = cardEffect(remodel, 1, outpost, 0, &g, 0, &bonus);
    
    // Compare expected v actual output
    if (e == 0) printf ("Illegal remodel use successful!\n");
    if (g.discard[0][0] == outpost) printf ("Outpost illegally acquired!\n");
    
    return 0;
}