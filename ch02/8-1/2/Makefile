CX = g++
CXFLAGS = -g -Wall
OBJS = main.o aa.o
TARGET = main
$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp aa.hpp
	$(CX) $(CXFLAGS) -c main.cpp
aa.o : aa.cpp aa.hpp
	$(CX) $(CXFLAGS) -c aa.cpp
.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)
