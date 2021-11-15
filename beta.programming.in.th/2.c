#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int i = 2000000000;
  int x = -2000000000;

  for (int j = 0; j < n; j++) {
    int z;
    scanf("%d", &z);
    if (z > x) {
      x = z;
    };

    if (z < i) {
      i = z;
    };
  }

  printf("%d\n%d", i, x);
}
