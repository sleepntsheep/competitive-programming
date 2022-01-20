#include <stdio.h>

int main() {
  int l, m, n;
  scanf("%d%d%d", &l, &m, &n);

  int a = 2000000000;
  int c = - 2000000000;
  int b;

  if (l < a) a = l;
  if (m < a) a = m;
  if (n < a) a = n;
  if (l > c) c = l;
  if (m > c) c = m;
  if (n > c) c = n;

  if (l == a) {
    if (m == c) b = n;
    if (n == c) b = m;
  }

  if (m == a) {
    if (l == c) b = n;
    if (n == c) b = l;
  }

  if (n == a) {
    if (l == c) b = m;
    if (m == c) b = l;
  }

  char s[3];

  scanf("%s", s);

  if (s[0] == 'A') printf("%d ", a);
  if (s[0] == 'B') printf("%d ", b);
  if (s[0] == 'C') printf("%d ", c);

  if (s[1] == 'A') printf("%d ", a);
  if (s[1] == 'B') printf("%d ", b);
  if (s[1] == 'C') printf("%d ", c);

  if (s[2] == 'A') printf("%d ", a);
  if (s[2] == 'B') printf("%d ", b);
  if (s[2] == 'C') printf("%d ", c);

}
