# compiler
CC = gcc

# name of the development executable: dev, app
# name of the production executable: responsive-units-tool
TARGET = responsive-units-tool

# They show possible errors within the code
CFLAGS = -g -Wall

# address of .c files
SRC = main.c src/converters.c src/copy.c src/format.c src/print.c

# Create the executable inside the build folder, run it and delete it
# the previous executable, if it exists in that folder
all:
	$(CC) $(CFLAGS) $(SRC) -o ./bin/$(TARGET) -lm && ./bin/$(TARGET)
clean:
	rm -rf ./build/$(TARGET)