CC=gcc
FLAGS=-Wall -g
AR=ar
#--------------------------------------------------------------

main.o: main.c work3.h
	$(CC) $(FLAGS) -c main.c

work3.o:
	$(CC) $(FLAGS) -c  work3.c

main.out: main.o libwork3.a 
	$(CC) $(FLAGS) main.o libwork3.a -o main.out

libwork3.a: work3.o
	$(AR) -rcs libwork3.a work3.o 
#--------------------------------------------------------------

.PHONY: work3 main all clean

# Creating static library
work3s: work3.o  libwork3.a

all: main.out 

res : clean all main.out  

clean:
	rm  work3.o libwork3.a  main.o main.out 