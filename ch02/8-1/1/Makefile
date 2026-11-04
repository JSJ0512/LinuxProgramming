CX = g++
CXFLAGS = -g -Wall
OBJS = main.o aa.o
TARGET = main
$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp aa.h
	$(CX) $(CXFLAGS) -c main.cpp
aa.o : aa.cpp aa.h
	$(CX) $(CXFLAGS) -c aa.cpp
.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)
