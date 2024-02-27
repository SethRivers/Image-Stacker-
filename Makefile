#Defines the compiler
CC = g++

#Compile with all errors and warnings
CFLAGS = -g -Wall -Wextra -c

#Links the .o files together and creates an executable
TARGET = stacker

#Readies $(TARGET) for use in the following code
all: $(TARGET)

#Marks all the files that will be compiled
$(TARGET):	main.o stacker.o
		$(CC) main.o stacker.o -o $(TARGET)

#Compiles the main.cpp file with all of the .h files
main.o: 	main.cpp stacker.h
		$(CC) $(CFLAGS) main.cpp

#Compiles the stacker.cpp/.h files
stacker.o: 	stacker.h stacker.cpp
		$(CC) $(CFLAGS) stacker.cpp

#Cleans out any unnecaary items post compiling.
clean:
		$(RM) *.o *~ stacker 
