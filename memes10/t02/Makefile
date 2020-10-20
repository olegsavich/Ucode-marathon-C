NAME = mx_cat

SRCS = src/*.c

INC = inc/*.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean

install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) *.c

uninstall: clean
	@rm -rf $(NAME)

clean:
	@rm -rf *.h
	@rm -rf *.c
	
reinstall: uninstall clean all
