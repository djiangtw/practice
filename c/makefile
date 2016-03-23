CC = gcc
SRC_FILES = leet_main.c \
			leet_1_two_sum.c \
			leet_3_longest_substring_without_repeating_characters.c \
			leet_7_reverse_integer.c \
			leet_8_string_to_integer_atoi.c \
			leet_9_palindrome.c \
			leet_12_integer_to_roman.c \
			leet_13_roman_to_integer.c \
			leet_19_remove_nth_node_from_end_of_list.c \
			leet_20_valid_parentheses.c \
			leet_21_merge_two_sorted_lists.c \
			leet_26_remove_duplicates_from_sorted_array.c \
			leet_27_remove_element.c \
			leet_38_count_and_say.c \
			leet_43_multiply_strings.c \
			leet_58_length_of_last_word.c \
			leet_66_plus_one.c \
			leet_67_add_binary.c \
			leet_70_climbing_stairs.c \
			leet_83_remove_duplicates_from_sorted_list.c \
			leet_88_merge_sorted_array.c \
			leet_104_maximum_depth_of_binary_tree.c \
			leet_112_path_sum.c \
			leet_118_pascals_triangle.c \
			leet_119_pascals_triangle_ii.c \
			leet_136_single_number.c \
			leet_137_single_number_ii.c \
			leet_153_find_minimum_in_rotated_sorted_array.c \
			leet_165_compare_version_numbers.c \
			leet_168_excel_sheet_column_title.c \
			leet_169_majority_element.c \
			leet_171_excel_sheet_column_number.c \
			leet_172_factorial_trailing_zeros.c \
			leet_189_rotate_array.c \
			leet_190_reverse_bits.c \
			leet_191_number_of_1_bits.c \
			leet_203_remove_linked_list_elements.c \
			leet_204_count_primes.c \
			leet_206_reverse_linked_list.c \
			leet_217_contains_duplicate.c \
			leet_219_contains_duplicate_ii.c \
			leet_231_power_of_two.c \
			leet_237_delete_node_in_a_linked_list.c \
			leet_242_valid_anagram.c \
			leet_292_nim_game.c \
			leet_258_add_digits.c \
			leet_260_single_number_iii.c \
			leet_263_ugly_number.c \
			leet_290_word_pattern.c \
			leet_299_bulls_and_cows.c \
			leet_328_odd_even_linked_list.c \
			leet_319_bulb_switcher.c \
			leet_326_power_of_three.c \
			leet_338_counting_bits.c \
			leet_util.c
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
