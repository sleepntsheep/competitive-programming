#include <stdio.h>

void main () {
  int n[4];
  scanf("%d%d%d%d", &n[0], &n[1], &n[2], &n[3]);

  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      if (n[i] > n[j]) {
        int a = n[i];
        n[i] = n[j];
        n[j] = a;
      }
    }
  }

  int z = 2000000000;
  int x = 2000000000;

/*   if (n[0] < z) z = n[0]; */
/*   if (n[1] < x) x = n[1]; */
/*   if (n[2] < x) x = n[2]; */
/*   if (n[3] < z) z = n[3]; */
/*   int r1 = x * z; */
/*  */

  z = 2000000000;
  x = 2000000000;


  if (n[0] < z) z = n[0];
  if (n[1] < z) z = n[1];
  if (n[2] < x) x = n[2];
  if (n[3] < x) x = n[3];
  int r2 = x * z;
  printf("%d", r2);
/*  */
/*   int r = 0; */
/*  */
/*   if (r1 > r) r = r1; */
/*   if (r2 > r) r = r2; */
/*  */
/*   printf("%d", r); */
/*  */
}
