#include <stdio.h>

#define GAMES 5
#define PLAYERS 4

int main(int argc, char** argv){
    // An array holding players and their scores in each game
    int players[GAMES][PLAYERS];
    float highest_average=0, player_average;
    int highest_average_player;
    int score;

    for (int i=0; i<GAMES; i++){
        printf("Game #%d \n",i);
        for(int j=0; j<PLAYERS; j++){
            printf("Enter scoring total for Player #%d: ",j+1);
            scanf("%d",&score);
            players[j][i] = score;
        }
    }

    // Calculate average for each player
    for (int i=0; i<PLAYERS; i++){
        int scores_sum=0;
        for (int j=0; j<GAMES;j++){
            scores_sum += players[i][j];
        }
        player_average = scores_sum/GAMES;
        if(player_average > highest_average){
            highest_average_player = i;
            highest_average = player_average;
        }
    }

    printf("Player #%d had the highest scoring average at %.2f PPG.\n",highest_average_player+1, highest_average);
}