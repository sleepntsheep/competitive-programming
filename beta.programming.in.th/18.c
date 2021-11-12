#include <stdio.h>

int main() {
  int n = 0;
  int k = 0;
  scanf("%d%d", &n, &k);
  int tb[n-1];
  for (int i = 2; i <= n; i++) {
    tb[i-2] = i;
  }
  int c = 0;
  while (c <= k) {
    int z = 0;
    z = tb[0];
    for (int i = 0; i < n; i++) {
      if (tb[i] % z == 0) {
        c++;
        if (c == k) {
          printf("%d", tb[i]);
        }
        for (int j = i; j < n; j++) {
          tb[j] = tb[j+1];
        }
        n--;
      }
    }
  }
}
