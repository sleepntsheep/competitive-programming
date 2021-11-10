#include <stdio.h>

void main() {
  int n1, n2;
  scanf("%d%d", &n1, &n2);
  int res = 1;
  int z = n1/2;
  for (int i = 1; i < z + 1; i++) {
    if (n1 % i == 0 && n2 % i == 0) res = i;
  }
  if (n1 == n2) res = n1;
  printf("%d", res);
}
