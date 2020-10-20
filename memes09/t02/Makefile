all: copy MINILIBMX create_lib little_clean

copy:
	mkdir obj
	cp inc/header.h obj
	cp src/mx_printchar.c obj
	cp src/mx_printint.c obj
	cp src/mx_printstr.c obj
	cp src/mx_strcpy.c obj
	cp src/mx_strlen.c obj
	cp src/mx_strcmp.c obj
	cp src/mx_isdigit.c obj
	cp src/mx_isspace.c obj
	cp src/mx_atoi.c obj

MINILIBMX: mx_printchar.o mx_printint.o mx_printstr.o mx_strcpy.o mx_strlen.o mx_strcmp.o mx_isdigit.o mx_isspace.o mx_atoi.o

mx_printchar.o: obj/mx_printchar.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_printchar.c

mx_printint.o: obj/mx_printint.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_printint.c

mx_printstr.o: obj/mx_printstr.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_printstr.c

mx_strcpy.o: obj/mx_strcpy.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_strcpy.c

mx_strlen.o: obj/mx_strlen.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_strlen.c

mx_strcmp.o: obj/mx_strcmp.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_strcmp.c

mx_isdigit.o: obj/mx_isdigit.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_isdigit.c

mx_isspace.o: obj/mx_isspace.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_isspace.c

mx_atoi.o: obj/mx_atoi.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/mx_atoi.c

create_lib:
	ar -src minilibmx.a mx_printchar.o mx_printint.o mx_printstr.o mx_strcpy.o mx_strlen.o mx_strcmp.o mx_isdigit.o mx_isspace.o mx_atoi.o
	ranlib minilibmx.a
	cp mx_printchar.o obj
	cp mx_printint.o obj
	cp mx_printstr.o obj
	cp mx_strcpy.o obj
	cp mx_strlen.o obj
	cp mx_strcmp.o obj
	cp mx_isdigit.o obj
	cp mx_isspace.o obj
	cp mx_atoi.o obj

little_clean:
	rm mx_printchar.o
	rm mx_printint.o
	rm mx_printstr.o
	rm mx_strcpy.o
	rm mx_strlen.o
	rm mx_strcmp.o
	rm mx_isdigit.o
	rm mx_isspace.o
	rm mx_atoi.o
	rm obj/header.h
	rm obj/mx_printchar.c
	rm obj/mx_printint.c
	rm obj/mx_printstr.c
	rm obj/mx_strcpy.c
	rm obj/mx_strlen.c
	rm obj/mx_strcmp.c
	rm obj/mx_isdigit.c
	rm obj/mx_isspace.c
	rm obj/mx_atoi.c

uninstall:
	rm -rf obj
	rm minilibmx.a

clean:
	rm -rf src
	rm -rf inc
	rm -rf obj

reinstall:
	make uninstall
	make
