#include <iostream>
using namespace std;
int main() {
    string num;
    cin >> num;
    int r11 = 0;
    int r3 = 0;
    bool e;
    for (int i = 0; i < num.length(); i++)
        r3 += num[i] - '0';
    for (int i = 0; i < num.length(); i++)
        r11 = ((r11 * 10) + (num[i]) - '0') % 11;
    r3 = r3 % 3;
    cout << r3 << ' ' << r11;
}
