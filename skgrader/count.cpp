#include <iostream>

int main(){
  int d;
  std::cin >> d;
  int res[d];
  for (int i = 1; i<=d; i++){
    int n;
    int r=0;
    std::cin >> n;
    int a[n];
    for (int j = 1; j<=n; j++){
      std::cin >> a[j];
      r += a[j];
    }
    res[i-1] = r;
  }
  for (int i = 0; i<d; i++){
    std::cout << res[i] << "\n";
  }
  return 0;
}
