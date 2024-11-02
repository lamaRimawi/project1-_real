G = gcc -g
O = -o
names = referee player drawer


all: $(names)

referee: referee.c
	$(G) referee.c $(O) referee -lpthread -lrt

player: player.c
	$(G) player.c $(O) player
drawer:drawer.c
  $(G) drawer.c $(O) drawer -lglut -lGLU -lGL -lm -lpthread -lrt
clean:
	rm -f $(names)
