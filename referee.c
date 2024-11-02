#include "headers.h"
#include "constants.h"
#include "functions.h"

int main(int argc, char *argv[]){
 read_File("arguments.txt");
 printf("%d",config.min_pull_delay);

  return 0;
}
