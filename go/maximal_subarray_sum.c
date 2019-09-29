#include <stdio.h>

int main()
{
  //code

  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  int maxSum = arr[0];
  int sum = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i - 1] < arr[i])
    {
      if (sum > 0)
        sum += arr[i];
      else
        sum = arr[i];
    }
    else
    {
      if (maxSum < sum)
        maxSum = sum;
      sum = arr[i];
    }
  }
  printf("%d", maxSum);
  return 0;
}