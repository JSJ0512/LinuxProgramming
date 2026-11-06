CX = g++
CXFLAGS = -g -Wall
OBJS = main.o 1106.o
TARGET = enter
$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp 1106.hpp
	$(CX) $(CXFLAGS) -c main.cpp
1106.o : 1106.cpp 1106.hpp
	$(CX) $(CXFLAGS) -c 1106.cpp
.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)
