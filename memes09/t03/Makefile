all: copy MINILIBMX create_lib little_clean

copy:
	mkdir obj
	cp inc/header.h obj/
	cp src/mx_printchar.c obj/
	cp src/mx_printint.c obj/
	cp src/mx_printstr.c obj/
	cp src/mx_strcpy.c obj/
	cp src/mx_strlen.c obj/
	cp src/mx_strcmp.c obj/
	cp src/mx_isdigit.c obj/
	cp src/mx_isspace.c obj/
	cp src/mx_atoi.c obj/

MINILIBMX: object.o

object.o:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/*.c

create_lib:
	ar -rc minilibmx.a *.o 
	ranlib minilibmx.a 
	cp *.o obj/

little_clean:
	rm *.o
	rm obj/*.h
	rm obj/*.c 

uninstall:
	rm -rf obj
	rm *.a 

clean:
	rm -rf src
	rm -rf inc
	rm -rf obj

reinstall:
	make uninstall
	make
