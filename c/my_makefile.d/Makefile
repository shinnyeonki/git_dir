CC = gcc # C Compiler
TARGET = app # Target file name
OBJS = main.o library.o # Object files
CFLAGS = -Wall -Wextra -Werror # C Flags
LDFLAGS = -L. -lmylib # Linker flags

all: $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) -o $@ $^

.c.o :
	$(CC) -c -o $@ $<



.PHONY: all clean
clean :
	rm -f *.o $(OBJS)
