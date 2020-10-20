.PHONY: all matrix_rain uninstall clean reinstall

SRCS := $(wildcard src/*.c)
HDRS := $(wildcard inc/*.h)

all: matrix_rain

matrix_rain:
	@clang ${HDRS} ${SRCS} -lncurses
	@mv a.out matrix_rain

uninstall: clean
	@rm -f matrix_rain

clean:
	@rm -f inc/*.gch

reinstall: uninstall matrix_rain
