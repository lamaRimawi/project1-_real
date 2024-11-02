#!/bin/sh


export LIBGL_ALWAYS_SOFTWARE=1


# Compile the programs
gcc -g referee.c -o referee -lpthread -lrt
gcc -g player.c -o player
gcc -g drawer.c -o drawer -lglut -lGLU -lGL -lm -lpthread -lrt


./referee
