#include <iostream>
#include <vector>

using namespace std;

int check_nrnr(int n) {
    int found[10] = { 0 };
    int digit;
    int last_digit = 10;
    while (n != 0) {
        digit = n % 10;
        if (found[digit] == 1) return 0;
        found[digit] = 1;
        if (digit >= last_digit) return 0;
        n /= 10;
        last_digit = digit;
    }
    return 1;
}

int get_nrnr(int n) {
    if (n > 2000000) return -1;
    int num = 1;
    for (int z = 0; z <= n; z++){
        z += check_nrnr(num);
        num++;
    }
    return num - 1;
}

int main() {
    int n;
    cin >> n;
    int in[n];
    for (int i = 0; i < n; i++){
        cin >> in[i];
    }

    for (int i = 0; i < n; i++) {
        int r = get_nrnr(in[i]);
        cout << r << endl;
    }
}
