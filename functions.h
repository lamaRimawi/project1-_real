#include "headers.h"
#include "constants.h"

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

GameConfig config;
void read_File( const char *filename){
FILE * file = fopen(filename, "r");
if (file == NULL){
  perror("Error opening file:");
  exit(ERROR_OPENING_FILE);

}
char line[SIZE_LINE];
while (fgets(line, sizeof(line), file)){
 char key[50];
 int value ;
 sscanf(line, "%49[^=] = %d", key, &value);
 if(strcmp(key, "score_target") == 0){
   config.score_target = value;
 }
 else if(strcmp(key, "max_game_time") == 0){
   config.max_game_time=value;
   }
   else if(strcmp(key, "initial_energy") == 0){
     config.initial_energy = value;}
   else if(strcmp(key, "energy_depletion_jump") == 0){
     config.energy_depletion_jump = value;
 }
 else if (strcmp(key, "energy_depletion_pull") == 0){
   config.energy_depletion_pull = value;
 }
 else if(strcmp(key, "min_jump_delay") == 0){
   config.min_jump_delay = value;}
 else if(strcmp(key, "max_jump_delay") == 0){
   config.max_jump_delay = value;
  }
  else if(strcmp(key, "min_pull_delay") == 0){
    config.min_pull_delay= value;}
  else if(strcmp(key, "max_pull_delay") == 0){
    config.max_pull_delay = value;}


 }


fclose(file);
printf("reading file %s\n", filename);

}





#endif