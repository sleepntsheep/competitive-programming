#include <cmath>
#include <iostream>
#include <string>
#include <math.h>
int main(){
  int d;
  std::cin >> d;
  std::string r;
  for (int i = 1; i <= d; i++){
    int x1, y1, r1, x2, y2, r2;
    scanf("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);
    double dis = sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
    if (dis > r1 + r2){
      r += "NIE\n";
    } else {
      r += "TAK\n";
    }
  }

  std::cout << r;
}
