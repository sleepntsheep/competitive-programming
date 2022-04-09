#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    int r = n % 7;

    char results[7] = {'C', 'D', 'E', 'F', 'G', 'A', 'B'};
    if (r == 0)
        cout << 'B';
    else 
        cout << results[r-1];
}