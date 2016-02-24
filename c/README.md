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
```
$ rel/leet
```

##New leet question
- add source files for them __filename__.{c|h} 
- TODO: write a script to generate the code template automatically.
- currently, using a bash script to generate c and h files for a specified test.
```
Usage:
    new_leet.sh <filename> <description> <author>

$ new_leet.sh leet_222_danny_jiang_header "222 Danny Jiang Header" "Danny Jiang"
```
