# Compilador C
CC=i686-elf-gcc
CFLAGS=-m32 -nostdlib -nostdinc -fno-builtin -fno-stack-protector -nostartfiles -nodefaultlibs -Wall -Wextra
CLIBS=-I ./ -I ../

# Librerias LIBC
LIBC=stdio.o 	\
     stdlib.o 	\
     string.o 	\
     unistd.o


# Regla: all
all: $(LIBC)

# Regla: clean
clean:
	find . -type f -name "*.o" -exec rm {} +

# Regla: Archivos .c
%.o: %.c
	$(CC) $(CFLAGS) $(CLIBS) -c $< -o $@