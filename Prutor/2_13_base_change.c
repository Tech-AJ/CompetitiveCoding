/*
A number can be written in different base. The numbers we commonly use 
are in base 10 (decimal numbers). For example:
      123 = 1*10*10 + 2*10 + 3 
It is possible to write a decimal number in any other base . For example
 123 can be written as 173 in base 8, because:
      123 = 1*8*8 + 7*8 + 3

For a base greater than 10, we need more symbols to represent digits for
 values &gt;= 10 . Suppose we represent these digits by upper case 
alphabets,  A=10, B=11, C=12, ..., Z=35. Then, 124 in base 14 will be 
8C, (8*14 + 12), in base 15 will be 84, and so on.

Write a program that takes a number n (n &gt; 0, and n will fit in an 
int)and a number b and converts the number n to base b. The base will be
 at most 36 (2 &lt;= b, b &lt;= 36), so that the number can be 
represented by digits 0,1,...,9, A, B, ... Z. 

Examples:
Input:
123
8
Output:
173

Input:
123
14
Output:
8B

Input:
165789643
27
Output:
BEPQH4
*/

#include <stdio.h>

int main() {
    int num,base;
    scanf("%d %d",&num,&base);
    char ans[1000];
    int count=0;
    while(num){
        int rem=num%base;
        ans[count]=(rem>10)?(char)rem-10+'A':(char)rem+'0';
      //  printf("%c %d\n",ans[count],)
        count++;
        num/=base;
        
    }
    while(count--){
        printf("%c",ans[count]);
        
    }
    
    
	//code
	return 0;
}