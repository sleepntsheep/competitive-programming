#include <iostream>

using namespace std;

int main() {
    int price;
    cin >> price;
    
    int r1, r2;
    r1 = price % 3;
    r2 = price % 11;
    cout << r1 << " " << r2;

    return 0;
}