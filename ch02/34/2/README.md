-     <img width="426" height="197" alt="image" src="https://github.com/user-attachments/assets/7cc50ddb-2e00-4fad-80d8-0230f4d3f278" />

-     CC = gcc
  CC는 gcc를 의미함
  
-     CFLAGS = -g -Wall
  CFLAGS는 -g -Wall을 의미함
  
-     OBJS = main.o test.o
  OBJS는 main.o test.o를 의미함
  
-     TARGET = adder
  TARGET은 adder를 의미함
  
-     $(TARGET) : $(OBJS)
  TARGET(adder)를 위한 필요항목 OBJS(main.o test.o)
  
-     $(CC) -o $(TARGET) $(OBJS)
  gcc -o adder main.o test.o와 같은 의미함
  
-     main.o : main.c test.h
  main.o를 위한 필요항목 main.c test.h
  
-     $(CC) $(CFLAGS) -c main.c
  gcc -g -Wall -c main.c와 같은 의미함
  
-     test.o : test.c test.h
  test.o를 위한 필요항목 test.c test.h
  
-     $(CC) $(CFLAGS) -c test.c
  gcc -g -Wall -c test.c와 같은 의미함
  
-     .PHONY: clean
  phony target clean 선언
  
-     clean :
  clean 정의
  
-     rm $(TARGET) $(OBJS)
  rm adder main.o test.o와 같은 의미함
