/*
Run-length encoding (RLE) is a very simple form of data compression in 
which runs of data (that is, sequences in which the same data value 
occurs in many consecutive data elements) are stored as a single data 
value and count, rather than as the original run. This is most useful on
 data that contains many consecutive duplicates. 

Write a program that takes as input an array of long integers, and 
creates two arrays: value, and count, to store the RLE for input array. 
The sequence of elements in count array should be same as that in the 
original array, ignoring the repetitions. 

Input Format: 
- First line contains N, the number of elements in the array (0 &lt; N 
&lt;= 1000)
- Next line contains  N long integers, the elements of the array

Output Format
- First line contains M, the number of elements in the count array ( 
same as the  number of elements in the value array).
- Next M lines contain two long integers each, the value and the count 
of i-th element in RLE on line i, separated by a SINGLE SPACE and ending
 with NEWLINE.

Example:
Input:
12
1 1 2 2 2 2 1 1 1 1 1 3
Output:
4
1 2
2 4
1 5
3 1

*/
#include <stdio.h>

int main()
{

    int len;
    scanf("%d", &len);
    int count = 1;
    int num;
    int arr[len], arr2[len];
    scanf("%d", &num);
    int num2;
    int cnt = 0;
    for (int i = 1; i < len; i++)
    {

        scanf("%d", &num2);
        if (num2 == num)
            count++;
        else
        {
            arr[cnt] = num;
            arr2[cnt] = count;
            cnt++;
            // printf("%d %d\n",num,count);
            num = num2;
            count = 1;
        }
    }
    //for last element
    arr[cnt] = num;
    arr2[cnt] = count;
    cnt++;
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++)
        printf("%d %d\n", arr[i], arr2[i]);

    //code
    return 0;
}