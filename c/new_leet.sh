#!/bin/bash

now="$(date +'%T %m-%d-%Y')"
filename="$1"
description="$2"
author="$3"
m_url="$4"

leet_c_head()
{
    echo "/**"
    echo " *     Filename: $filename.$1"
    echo " *  Description: $description"
    echo " *      Version: 1.0"
    echo " *      Created: $now"
    echo " *     Revision: none"
    echo " *     Compiler: gcc"
    echo " *       Author: $author"
    echo " *          URL: $m_url"
    echo " */"
    echo ""
}

leet_c_source()
{
    leet_c_head "c"
    echo "#include \"leet_header.h\""
    echo "#include \"$filename.h\""
    echo ""
    echo "int $filename""_test(void)"
    echo "{"
    echo "    printf(\"%s\n\", __FILE__);"
    echo "    return 0;"
    echo "}"
    echo ""

}

leet_c_header()
{
    leet_c_head "h"
    echo "#ifndef __${filename^^}_H"
    echo "#define __${filename^^}_H"
    echo ""
    echo "extern int $filename""_test(void);"
    echo ""
    echo "#endif"
}

if [ ! -f ./src/$filename.c ]
then
    leet_c_source > ./src/$filename.c
    leet_c_header > ./src/$filename.h
fi
