GCC = g++
FLAGS = -Wall -std=c++23

LIB_CPP = src/gen-err-class.cpp
LIB_O = out/gen-err-class.o

TARGET = out/gen-err-class.a
# FILES := gen-err-class.cpp gen-err-class.h


TARGET: $(LIB_O)
	ar rcs $(TARGET) $(LIB_O)

out/gen-err-class.o: $(LIB_CPP)
	$(GCC) $(FLAGS) -c $(LIB_CPP) -o $(LIB_O)