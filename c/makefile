CC = gcc
SRC_FILES = leet_main.c \
			leet_43_multiply_strings.c \
			leet_169_majority_element.c \
			leet_171_excel_sheet_column_number.c \
			leet_217_contains_duplicate.c \
			leet_231_power_of_two.c \
			leet_242_valid_anagram.c \
			leet_292_nim_game.c \
			leet_258_add_digits.c \
			leet_263_ugly_number.c \
			leet_326_power_of_three.c
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
#	@echo $(SRC)

#dox: foo.dox
#	@doxygen $^

prof: $(REL) gmon.out
	@gprof rel/foo gmon.out > doc/analysis.txt
	@echo code analysis is generated in doc/analysis.txt

clean:
	@rm -rf $(REL_PATH)
	@rm -rf doc/html doc/latex
	@rm -f doc/analysis.txt
	@rm -f gmon.out
