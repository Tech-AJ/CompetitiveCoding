/*
Write a program that accepts a string 'str' and a number 'k' and prints 
"k-reversed-string", where a "k-reversed-string"
is defined as the string obtained by reversing the original string in 
groups of k. Take for example, the string "question" and the value of 
'k' to be 3, the 3-reversed-string for "question" is "euqitsno".
Take note of the fact that the last group may not be a multiple of 'k' 
and hence needs to be dealt specially.

Example:

INPUT:
question
3

OUTPUT:
euqitsno

Note:
1) You should use pointers to traverse the strings. Using index notation
 will attract a penalty of 50%.
2) Use the prototype of the function provided as template.
</div>
*/


#include <stdio.h>
#include <string.h>
int main()
{

    char str[128];
    scanf("%s", str);

    // always take another ptr don't use str as pointer
    // str+=3 not alloweed while ptr+=3 is allowed

    char *ptr = str;
    int len = strlen(str);
    int len2 = len % 3;
    len -= len2;

    //   take 1 extra for terminator else garbage result
    char a[4];

    while (len)
    {
        // strncpy copies n no of characters while strcpy copies till end
        strncpy(a, ptr, 3);

        // strrev returns reversed string
        printf("%s", strrev(a));
        len -= 3;
        ptr += 3; // traversing char array via pointer
    }

    if (len2)
    {
        strcpy(a, ptr);
        printf("%s", strrev(a));
    }

    //code
    return 0;
}
