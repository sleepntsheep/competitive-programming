#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int xmax=-20000000, ymax=-20000000, xmin=20000000, ymin=200000000;
  for (int i = 1; i <= n; i++){
    int x, y;
    std::cin >> x;
    std::cin >> y;
    if (x < xmin){
      xmin = x;
    }
    if (x > xmax) {
      xmax = x;
    }
    if (y < ymin){
      ymin = y;
    }
    if (y > ymax){
      ymax = y;
    }
  }
  int result = 2*((xmax-xmin)+(ymax-ymin));
  std::cout << result;
  return 0;
}

