# COMPILER/LINKER
COMPILE = g++
ARCHIVE = ar rcs
CPP_STD = -std=c++23
FLAGS = -Wall -fdiagnostics-color=always -fmessage-length=80

# DIRECTORIES
SRC = $(CWD)src/
BIN = $(CWD)build/
LIB = $(CWD)lib/
INC = $(CWD)include/

# SOURCE FILES
MAIN_CXX = $(SRC)main.cpp
GEN_ERR = $(SRC)gen_err.cpp

# FINAL TARGET
TARGET = $(BIN)main

# LIBRARY
GEN_ERR_CXX = $(LIB)libgen_err.a
OBJ_GEN_OBJ = $(BIN)gen_err.o
LIB_GEN_ERR_A = $(LIB)libgen_err.a


#########################################################
# RULES
#########################################################
all: $(TARGET)

$(TARGET): $(MAIN_CXX)
	$(COMPILE) $(CPP_STD) $(FLAGS) -I$(INC) -o $(TARGET) $(MAIN_CXX)


$(LIB_GEN_ERR): $(GEN_ERR)
	$(COMPILE) $(CPP_STD) $(FLAGS) -I$(INC) -c $(GEN_ERR)