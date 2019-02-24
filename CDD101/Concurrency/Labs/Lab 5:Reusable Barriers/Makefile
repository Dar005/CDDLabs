# Darran Gahan 24/01/2019
# Makefile for lab 4 Mutual Exclusion

CC=g++
CFLAGS= -std=c++11 -pthread

%.0: %.cpp
	$(CC) -c -o $@ $< $(CFLAGS) $(DEBUGFLAGS)

ALL: main.cpp
	$(CC) -o reusableBarrier main.cpp Semaphore.cpp Barrier.cpp $(CFLAGS) $(DEBUGFLAGS)

DEBUG: DEBUGFLAGS = -DDEBUG
DEBUG: ALL

CLEAN:
	rm *.o
