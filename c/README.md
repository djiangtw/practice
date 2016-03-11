#Leet Code in C
----
##Coding Style
Use standard BSD style for the source code.

```
bsdstyle()
{
    astyle --style=bsd --indent=spaces=4 $*
}
```

##Build Code
```
$ make clean
$ make all
```

##Execute Code
*<testcase_number>* is the question number, it might be unique as I know.
```
$ rel/leet <testcase_number>
or
$ make clean; make; rel/leet <testcase_number>
```

##New leet question
- add source files for them __filename__.{c|h} 
- TODO: write a script to generate the code template automatically.
- TODO: write a script to make adding leet solutions easily.
- TODO: write a script to manage the leetcode solutions and generate makefile and common header files automatically.
- currently, using a bash script to generate c and h files for a specified test.
```
Usage:
    new_leet.sh <filename> <description> <author>

$ new_leet.sh leet_222_danny_jiang_header "222 Danny Jiang Header" "Danny Jiang" "https://leetcode.com/problems/danny-jiang-header/"
```
- You have to add your source code filename to `makefile`;
```
TESTCASE test_cases[] = 
{
    {1, leet_1_two_sum_test},
    {3, leet_3_longest_substring_without_repeating_characters_test},
    {7, leet_7_reverse_integer_test}, 
    {8, leet_8_string_to_integer_atoi_test},
    ...

```
-  and add header file and testcase to file`src/leet_modules.h`.
```
SRC_FILES = leet_main.c \
			leet_1_two_sum.c \
			leet_3_longest_substring_without_repeating_characters.c \
			leet_7_reverse_integer.c \
			leet_8_string_to_integer_atoi.c \
			leet_9_palindrome.c \
			leet_21_merge_two_sorted_lists.c \
			leet_27_remove_element.c \

```
