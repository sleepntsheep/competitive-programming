#include <iostream>
#include <cctype>

using namespace std;

int main() {
  string s;
  cin >> s;
  bool has_upper = false;
  bool has_lower = false;
  for (char c: s) {
    if (isupper(c)) {
      has_upper = true;
    }
    if (islower(c)) {
      has_lower = true;
    }
  }

    if (has_upper && has_lower) {
      cout << "Mix";
    }
    else if (has_upper) {
      cout << "All Capital Letter";
    }
    else {
      cout << "All Small Letter";
    }
}
