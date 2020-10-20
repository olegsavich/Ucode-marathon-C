.PHONY: all way_home uninstall clean reinstall

SRCS := $(wildcard src/*.c)
HDRS := $(wildcard inc/*.h)

all: way_home

way_home:
	@clang -std=c11 -Wall -Wextra -Werror -Wpedantic ${HDRS} ${SRCS}
	@mv a.out way_home

uninstall: clean
	@rm -f way_home

clean:
	@rm -f inc/*.gch

reinstall: uninstall way_home
