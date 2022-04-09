#include <iostream>


int main() {
  int n;
  std::cin >> n;
  int a[n];
  for (int i = 0; i < n; i++){
    std::cin >> a[i];
  }
  for (int i = 0; i < n; i++){
    int result = 0;
    for (int j = i; j < n; j++){
      result += a[j];
    }
    std::cout << result << " ";
  }

  return 0;
}
