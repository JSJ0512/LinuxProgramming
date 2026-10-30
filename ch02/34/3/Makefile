CX = g++
CXFLAGS = -g -Wall
OBJS = main.o test.o
TARGET = adder
$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp test.hpp
	$(CX) $(CXFLAGS) -c main.cpp
test.o : test.cpp test.hpp
	$(CX) $(CXFLAGS) -c test.cpp
.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)
