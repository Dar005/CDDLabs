# Darran Gahan 24/01/2019
# Makefile for lab6


CC=g++
CFLAGS= -std=c++11 -pthread

CFILES= SafeBuffer.cpp Semaphore.cpp Event.cpp main.cpp
OBJFILES= SafeBuffer.o Semaphore.o Event.o main.o

%.o:%.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

ALL: $(OBJFILES)
	$(CC) -o prodCon $(OBJFILES) $(CFLAGS)

CLEAN: 
	rm *.o
