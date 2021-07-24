/*
 * use the first string to match others
 */
#include <string.h>
#include <stdio.h>

char str1[] = "flower";
char str2[] = "flow";
char str3[] = "flight";

char* strr[] = {str1, str2, str3};
char * longestCommonPrefix(char ** strs, int strsSize){
    int i, j;

    if(strlen(strs[0]) == 0)
        return strs[0];

    for( j = 0; j < strlen(strs[0]); j++)
    {
        for (i = 1; i < strsSize; i++)
        {
            if(j > strlen(strs[i]))
                return strs[i];
            if(strs[i][j] != strs[0][j])
            {
                strs[0][j] = 0;
                return strs[0];
            }
        }
    }
    return strs[0];
}

void main(void)
{
    char* s = longestCommonPrefix(strr, 3);
    printf("output: %s\n", s);
}
