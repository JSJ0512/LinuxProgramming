- <img width="450" height="221" alt="image" src="https://github.com/user-attachments/assets/82aa9441-56d0-4b69-b730-606ab621f5d6" />

-     CX = g++
CX는 g++를 의미함
-     CXFLAGS = -g -Wall
CXFLAGS는 -g -Wall을 의미함
-     OBJS = main.o test.o
OBJS는 main.o test.o를 의미함
-     TARGET = adder
TARGET은 adder를 의미함
-     $(TARGET) : $(OBJS)
ARGET(adder)를 위한 필요항목 OBJS(main.o test.o)
-     $(CX) -o $(TARGET) $(OBJS)
g++ -o adder main.o test.o와 같은 의미함
-     main.o : main.cpp test.hpp
main.o를 위한 필요항목 main.cpp test.hpp
-     $(CX) $(CXFLAGS) -c main.cpp
g++ -g -Wall -c main.cpp와 같은 의미함
-     test.o : test.cpp test.hpp
test.o를 위한 필요항목 test.cpp test.hpp
-     $(CX) $(CXFLAGS) -c test.cpp
g++ -g -Wall -c test.cpp와 같은 의미함
-     .PHONY: clean
phony target clean 선언
-     clean :
clean 정의
-     rm $(TARGET) $(OBJS)
rm adder main.o test.o와 같은 의미함
