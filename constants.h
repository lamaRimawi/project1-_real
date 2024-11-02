#include "headers.h"
#ifndef CONSTANTS_H

#define CONSTANTS_H
#define NUMBER_OF_TEAMS 3
#define NUMBER_OF_PLAYERS 3
#define INITIAL_ENERGY 100
#define SCORE_TARGET 100
#define MAX_GAME_TIME 120

#define WINDOW_WIDTH 600
#define WINDOW_HEIGHT 600
#define BRIDGE_Y_POSITION 500
#define PLAYER_RADIUS 10
#define  ERROR_OPENING_FILE -1
#define SIZE_LINE 256

typedef struct{
 int energy;
 pid_t pid;
 int player_id;
 int team_id;
}Player;

typedef struct{
  Player players[NUMBER_OF_PLAYERS];
  int score;
}Team;

typedef struct{
  int max_game_time;
  int score_target;
  int initial_energy;
  int energy_depletion_jump;
  int energy_depletion_pull;
    int min_jump_delay;
    int max_jump_delay;
    int min_pull_delay;
    int max_pull_delay;
}GameConfig;

#endif