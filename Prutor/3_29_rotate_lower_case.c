/*
 <div style="padding: 5px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204);" class="pre">[20
 points]

You have to write a program that, given a char array of size n, and two 
non-negative integers k and r, rotates each lower case (not other 
characters) character of that array by k and then rotates the entire 
array by r. The example of rotations are:

Rotating a character:
a rotated by 3 becomes: d
y rotated by 5 becomes: d

Rotating an array:
adfghi rotated by 1 becomes: iadfgh 
adfghi rotated by 4 becomes: fghiad

INPUT:
1st line contains 3 integers n, k, and r, seperated by spaces.
2nd line contains n or more characters for the character array.

Maximum value of n is 1000. Maximum value of k and r can be <span class="MathJax_Preview"></span><span style="" aria-readonly="true" role="textbox" id="MathJax-Element-1-Frame" class="MathJax"><nobr><span style="width: 1.875em; display: inline-block;" id="MathJax-Span-1" class="math"><span style="display: inline-block; position: relative; width: 1.407em; height: 0px; font-size: 132%;"><span style="position: absolute; clip: rect(1.192em, 1000em, 2.403em, -0.404em); top: -2.219em; left: 0em;"><span id="MathJax-Span-2" class="mrow"><span id="MathJax-Span-3" class="msubsup"><span style="display: inline-block; position: relative; width: 1.428em; height: 0px;"><span style="position: absolute; clip: rect(1.823em, 1000em, 2.836em, -0.404em); top: -2.652em; left: 0em;"><span style="font-family: MathJax_Main;" id="MathJax-Span-4" class="mn">10</span><span style="display: inline-block; width: 0px; height: 2.652em;"></span></span><span style="position: absolute; top: -2.72em; left: 0.974em;"><span style="font-size: 70.7%; font-family: MathJax_Main;" id="MathJax-Span-5" class="mn">5</span><span style="display: inline-block; width: 0px; height: 2.327em;"></span></span></span></span></span><span style="display: inline-block; width: 0px; height: 2.219em;"></span></span></span><span style="border-left: 0em solid; display: inline-block; overflow: hidden; width: 0px; height: 1.312em; vertical-align: -0.1em;"></span></span></nobr></span><script id="MathJax-Element-1" type="math/tex">10^5</script>.

OUTPUT:
1 line containing n characters which is the encrypted and rotated array given in input. 

EXAMPLE:



Example 1
Example 2
Example 3
Example 4


INPUT
6 7 3
rotate

10 3 9
This is go
1 5 6
a
0 5 10
sdfj


OUTPUT
halyva
klv lv jrT
f

(no output)
Explanation: 
In Example 1, we get yvahal by rotating each character in the array by 7, and then we get halyva by rotating yvahal by 3.</div>
 */

#include <stdio.h>

int main()
{
    int n, k, r;
    scanf("%d %d %d", &n, &k, &r);
    char arr[n];
    char space;
    scanf("%c", &space);

    gets(arr);
    // printf("%s",arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            char x = (((arr[i] + k - 'a') % 26) + 'a');
            arr[i] = x;
            //  printf("%c",arr[i]);
        }
    }

    //rotate
    char arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[(i + r) % n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c", arr2[i]);
    }

    //code
    return 0;
}
