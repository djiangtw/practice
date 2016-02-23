CC = gcc
SRC_FILES = leet_main.c \
			leet_292_nim_game.c \
			leet_258_add_digits.c
SRC_PATH = src/
SRC = $(addprefix $(SRC_PATH), $(SRC_FILES))
REL_FILES = leet
REL_PATH = rel/
REL = $(addprefix $(REL_PATH), $(REL_FILES))
CFLAG = -Wall -pg -g

all: $(REL)
	@echo "make completed!"

$(REL): $(SRC)
	@mkdir -p rel
	@$(CC) -o $@ $(CFLAG) $^
	@objcopy --only-keep-debug $@ $@.debug
	@echo $(SRC)

#dox: foo.dox
	#@doxygen $^

prof: $(REL) gmon.out
	@gprof rel/foo gmon.out > doc/analysis.txt
	@echo code analysis is generated in doc/analysis.txt

clean:
	@rm -rf $(REL_PATH)
	@rm -rf doc/html doc/latex
	@rm -f doc/analysis.txt
	@rm gmon.out
