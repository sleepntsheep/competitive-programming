#include <iostream>
#include <map>


int main(){
  int n;
  std::cin >> n;
  int a[n];
  bool y = true;
  std::map<int, int> m;
  for (int i = 0; i < n; i++){
    std::cin >> a[i];
    int z = a[i];
    if (m[z] >= 1){
      m[z] = m[z] + 1;
    } else {
      m[z] = 1;
    }
  }
  for (int i = 0; i < n; i++){
    int z = a[i];
    if (m[z] >= 3){
      std::cout << "TAK";
      y = false;
      break;
    }
  }

  if (y == true){
    std::cout << "NIE";
  }
  return 0;
}
