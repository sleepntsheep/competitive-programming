#include <stdio.h>
#include <math.h>

int main () {
  double a, b;
  scanf("%lf%lf", &a, &b);
  double res = sqrt(a*a+b*b);
  printf("%lf", res);
}
