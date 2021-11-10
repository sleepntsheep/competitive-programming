#include <stdio.h>

int main() {
  int m, n;
  scanf("%d%d", &m, &n);

  int x[m][n];
  int z[m][n];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &x[i][j]);
    }
  }  

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &z[i][j]);
    }
  }  

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      int u,y;
      y = x[i][j];
      u = z[i][j];
      
      printf("%d ", y+u);
    }
    printf("\n");
  }

}
