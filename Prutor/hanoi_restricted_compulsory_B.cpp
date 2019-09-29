
#include <iostream>
using namespace std;

int hanoi(int n, char from, char to, char rodB)
{

    if (n == 1)
    {
        cout << "Move disk 1 from rod " << from << " to rod " << rodB << endl;
        cout << "Move disk 1 from rod " << rodB << " to rod " << to << endl;
        return;
    }
    hanoi(n - 1, from, to, rodB);
    cout << "Move disk " << n << "from rod " << from << " to rod " << rodB << endl;
    hanoi(n - 1, to, from, rodB);
    cout << "Move disk " << n << "from rod " << rodB << " to rod " << to << endl;
    hanoi(n - 1, from, to, rodB);
}

int main()
{
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'C', 'B');

    return 0;
}

// using move function

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

    {
        hanoi(n - 1, from, to, rodB);
        move(from, rodB);
        hanoi(n - 1, to, from, rodB);
        move(rodB, to);
        hanoi(n - 1, from, to, rodB);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'C', 'B');

    return 0;
}