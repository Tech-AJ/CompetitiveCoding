/*
Towers of Hanoi Variant:
 In the classic problem, we have three poles, A, B, C and N discs that 
fit onto the poles. The discs differ in size and are initially arranged 
on pole A in order from largest disc at the bottom to smallest disc at 
the top. The task is to move the stack of discs to pole C, while obeying
 the following rules: 
 Move only one disc at a time.Never place a disc on a smaller one. 
 Here you have to solve Towers of Hanoi problem with the extra 
restriction that 


 you are NOT allowed to directly transfer a disk from A to C.
 In other words, every move from A to C must go through pole B.

*/

#include <iostream>
using namespace std;

// the basic move of one disk: DO NOT CHANGE THIS FUNCTION.
void move(char From, char To)
{
    const int NumPerLine = 8;
    static int num = 0;
    if (num % NumPerLine == 0)
    {
        printf("\n%5d: ", num);
    }
    else
    {
        printf(" ");
    }
    printf("%c->%c", From, To);
    num++;
}

void hanoi(int n, char from, char to, char rodB)
{

    if (n == 0)
    {
        return;
    }

    // code when rodB is compulsory to use , as solved in prev problem
    if (from == 'A' && to == 'C')
    {
        hanoi(n - 1, from, to, rodB);
        move(from, rodB);
        hanoi(n - 1, to, from, rodB);
        move(rodB, to);
        hanoi(n - 1, from, to, rodB);
    }
    else // naive implementation
    {
        hanoi(n - 1, from, rodB, to);
        move(from, to);
        hanoi(n - 1, rodB, to, from);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'C', 'B');

    return 0;
}
