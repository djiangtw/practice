/**
 *     Filename: leet_modules.h
 *  Description: leet questions/modules
 *      Version: 1.0
 *      Created: 10:03:20 02-24-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL:
 */

#ifndef __LEET_MODULES_H
#define __LEET_MODULES_H

#include "leet_1_two_sum.h"
#include "leet_3_longest_substring_without_repeating_characters.h"
#include "leet_7_reverse_integer.h"
#include "leet_8_string_to_integer_atoi.h"
#include "leet_9_palindrome.h"
#include "leet_21_merge_two_sorted_lists.h"
#include "leet_26_remove_duplicates_from_sorted_array.h"
#include "leet_27_remove_element.h"
#include "leet_43_multiply_strings.h"
#include "leet_67_add_binary.h"
#include "leet_83_remove_duplicates_from_sorted_list.h"
#include "leet_88_merge_sorted_array.h"
#include "leet_104_maximum_depth_of_binary_tree.h"
#include "leet_112_path_sum.h"
#include "leet_118_pascals_triangle.h"
#include "leet_119_pascals_triangle_ii.h"
#include "leet_136_single_number.h"
#include "leet_137_single_number_ii.h"
#include "leet_153_find_minimum_in_rotated_sorted_array.h"
#include "leet_165_compare_version_numbers.h"
#include "leet_168_excel_sheet_column_title.h"
#include "leet_169_majority_element.h"
#include "leet_171_excel_sheet_column_number.h"
#include "leet_189_rotate_array.h"
#include "leet_190_reverse_bits.h"
#include "leet_191_number_of_1_bits.h"
#include "leet_204_count_primes.h"
#include "leet_206_reverse_linked_list.h"
#include "leet_217_contains_duplicate.h"
#include "leet_231_power_of_two.h"
#include "leet_237_delete_node_in_a_linked_list.h"
#include "leet_242_valid_anagram.h"
#include "leet_258_add_digits.h"
#include "leet_260_single_number_iii.h"
#include "leet_263_ugly_number.h"
#include "leet_290_word_pattern.h"
#include "leet_299_bulls_and_cows.h"
#include "leet_326_power_of_three.h"
#include "leet_328_odd_even_linked_list.h"

#define END_OF_TEST_SN  (-1)
typedef struct TESTCASE_t
{
    int sn;
    int (*test)(void);
} TESTCASE;

TESTCASE test_cases[] = 
{
    {1, leet_1_two_sum_test},
    {3, leet_3_longest_substring_without_repeating_characters_test},
    {7, leet_7_reverse_integer_test}, 
    {8, leet_8_string_to_integer_atoi_test},
    {9, leet_9_palindrome_test},
    {21, leet_21_merge_two_sorted_lists_test},
    {26, leet_26_remove_duplicates_from_sorted_array_test},
    {27, leet_27_remove_element_test},
    {43, leet_43_multiply_strings_test},
    {67, leet_67_add_binary_test},
    {83, leet_83_remove_duplicates_from_sorted_list_test},
    {88, leet_88_merge_sorted_array_test},
    {104, leet_104_maximum_depth_of_binary_tree_test},
    {112, leet_112_path_sum_test},
    {118, leet_118_pascals_triangle_test},
    {119, leet_119_pascals_triangle_ii_test},
    {136, leet_136_single_number_test},
    {137, leet_137_single_number_ii_test},
    {153, leet_153_find_minimum_in_rotated_sorted_array_test},
    {165, leet_165_compare_version_numbers_test},
    {168, leet_168_excel_sheet_column_title_test},
    {169, leet_169_majority_element_test},
    {171, leet_171_excel_sheet_column_number_test},
    {189, leet_189_rotate_array_test},
    {190, leet_190_reverse_bits_test},
    {191, leet_191_number_of_1_bits_test},
    {204, leet_204_count_primes_test},
    {206, leet_206_reverse_linked_list_test},
    {217, leet_217_contains_duplicate_test},
    {231, leet_231_power_of_two_test},
    {237, leet_237_delete_node_in_a_linked_list_test},
    {242, leet_242_valid_anagram_test},
    {258, leet_258_add_digits_test},
    {260, leet_260_single_number_iii_test},
    {263, leet_263_ugly_number_test},
    {290, leet_290_word_pattern_test},
    {299, leet_299_bulls_and_cows_test},
    {326, leet_326_power_of_three_test},
    {328, leet_328_odd_even_linked_list_test},
    {END_OF_TEST_SN, NULL}
};
#endif
