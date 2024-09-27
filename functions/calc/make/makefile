CC = gcc
CFLAGS = -Wall -g -Werror -o
LDFLAGS = -c
 
SRC = ./src
OBJ = ./object
INC = ./include
BIN = ./bin
 
IFLAGS = -I $(INC)
 
 
all: $(OBJ)/main.o $(OBJ)/function.o
	$(CC) $(CFLAGS)  $(BIN)/calc $(OBJ)/main.o $(OBJ)/function.o
$(OBJ)/main.o: $(SRC)/main.c
	$(CC) $(LDFLAGS) $(SRC)/main.c $(IFLAGS)
$(OBJ)/function.o: $(SRC)/function.c
	$(CC) $(LDFLAGS) $(SRC)/function.c $(IFLAGS)
	mv *.o $(OBJ)
 
clean: 
	rm $(OBJ)/*.o
	rm $(BIN)/calc
	echo "Successfully deleted"
