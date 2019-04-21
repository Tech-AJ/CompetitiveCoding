#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// pass size before array c99 convention if size is dynamic
void transpose(int size, int arr[][size])
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < i; j++)
        {
            swap(&arr[i][j], &arr[j][i]);
        }
}

int main()
{

    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    // anticlockwise starts here

    transpose(n, a);

    printf("anticlockwise rotation \n");

    // mirror image around  mid row
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            swap(&a[i][j], &a[n - 1 - i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // again apply clockwise to get original matrix

    printf("clockwise rotation to get original matrix\n");

    transpose(n, a);

    // mirror image around  mid col
    for (int j = 0; j < n / 2; j++)
    {
        for (int i = 0; i < n; i++)
        {
            swap(&a[i][j], &a[i][n - 1 - j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    //code
    return 0;
}