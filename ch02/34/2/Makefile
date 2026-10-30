CC = gcc
CFLAGS = -g -Wall
OBJS = main.o test.o
TARGET = adder

$(TARGET) : $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
main.o : main.c test.h
	$(CC) $(CFLAGS) -c main.c
test.o : test.c test.h
	$(CC) $(CFLAGS) -c test.c

.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)
