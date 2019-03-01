TARGET = RadioTower
LIBS = -lm
CC = gcc
CFLAGS = -g -Wall -I "./"

OBJECTS = $(patsubst %.c, %.o, $(wildcard *.c))
HEADERs = $(wildcard *.h)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS)  $(LIBS) -o $@ 

clean:
	-rm -f *.o core *.core
