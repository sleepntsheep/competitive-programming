#include <iostream>
#include <iomanip>
#include <math.h>

int main(){
  int n, m;
  double result = 0;
  std::cin >> n;
  std::cin >> m;
  for (int i = 1; i <= n; i++){
    double z;
    std::cin >> z; 
    result += pow(z, m);
  }
  std::cout << std::fixed << std::setprecision(3) <<result;
}
