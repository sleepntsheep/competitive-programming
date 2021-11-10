#include <stdio.h>
#include <math.h>

using namespace std;
int main() {
  double r;
  scanf("%lf", &r);
  double r1 = M_PI*pow(r, 2);
  double r2 = 2*pow(r, 2);
  printf("%lf\n", r1);
  printf("%lf", r2);
}
