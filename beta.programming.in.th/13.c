#include <stdio.h>

void main() {
  int n[9];
  int r[7];
  int sum = 0;
  for (int i = 0; i < 9; i++) {
    int z;
    scanf("%d", &z);
    n[i] = z;
    sum += z ;
  }
  
  int x1, x2;
  int triggered = 0;
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (i == j) continue;
      if (sum - n[i] - n[j] == 100) {
        x1 = n[i];
        x2 = n[j];
        triggered = 1;
        break;
      }
    }
    if (triggered) break;
  }

  for (int o = 0; o < 9; o++) {
    if (n[o] == x1) continue;
    if (n[o] == x2) continue;
    printf("%d\n", n[o]);
  }

}
