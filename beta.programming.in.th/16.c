#include <stdio.h>

void main() {
  int n;
  scanf("%d", &n);
  char s[n];
  scanf("%s", s);

  int a, b, c;
  a = 0;
  b = 0;
  c = 0;

  for (int i = 0; i < n; i++) {

    if (s[i] == 'A'){
      if (i % 3 == 0) a++;
      if (i % 4 == 1) b++;
      if (i % 6 == 2 || i % 6 == 3) c++;
    }

    if (s[i] == 'B'){
      if (i % 3 == 1) a++;
      if (i % 4 == 0 || i % 4 == 2) b++;
      if (i % 6 == 4 || i % 6 == 5) c++;
    }

    if (s[i] == 'C'){
      if (i % 3 == 2) a++;
      if (i % 4 == 3) b++;
      if (i % 6 == 0 || i % 6 == 1) c++;
    }

  }

  int x = -1;
  if (a > x) x = a;
  if (b > x) x = b;
  if (c > x) x = c;

  printf("%d\n", x);

  if (a == x) {
    printf("Adrian\n");
  }
  if (b == x) {
    printf("Bruno\n");
  }
  if (c == x) {
    printf("Goran\n");
  }

//  printf("%d %d %d", a, b, c);
}
