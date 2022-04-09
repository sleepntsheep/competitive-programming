#include <iostream>
#include <cmath>

using namespace std;

int checkPrime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    int c = 0;
    cin >> n;
    for (int i = 2; i <= n; i++)
        c += checkPrime(i);

    cout << c;
}
