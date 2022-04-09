#include <stdio.h>
#include <string.h>

void swap(int *arr, int i1, int i2)
{
  int temp = arr[i1];
  arr[i1] = arr[i2];
  arr[i2] = temp;
}

int main()
{
  int n, m;
  scanf("%d%d", &n, &m);
  int a[n + 2];
  memset(a, 0, sizeof a);
  for (int i = 1; i <= n; i++)
    scanf("%d", &a[i]);
  // printf("\n");
  for (int i = 0; i < m; i++)
  {
    char op;
    int n1, n2;
    scanf(" %c", &op);
    switch (op)
    {
    case 'a':
      scanf("%d%d", &n1, &n2);
      swap(a, n1, n2);
      break;
    case 'b':
      scanf("%d%d", &n1, &n2);
      a[n1] = n2;
      break;
    case 'c':
      scanf("%d", &n1);
      for (int i = 1; i <= n1 / 2; i++)
      {
        swap(a, i, n1 - i);
      }
      int z = 0;
      for (int i = n1 + 1; i <= n - (n - n1) / 2; i++)
      {
        swap(a, i, n - (i - n1 - 1));
      }
      break;
    case 'q':
      scanf("%d", &n1);
      printf("%d\n", a[n1]);
    }
    // printf("\n Val: ");
    // for (int i = 1; i <= n; i++)
    //     printf("%d ", a[i]);
    // printf("\n");
  }
}