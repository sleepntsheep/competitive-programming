#include <iostream>
using namespace std; 
string int_roman(int n) { 
    string str_romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int int_num[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string result = "";

    for (int i = 0; i < 13; i++) {
        while (n - int_num[i] >= 0){
            result += str_romans[i];
            n -= int_num[i];
        }
    }

    return result;
}

int main() { 
    int n;
    cin >> n; 

    int i = 0,
        v = 0,
        x = 0,
        l = 0,
        c = 0;

    for (int z = 1; z <= n; z++){
        string result = int_roman(z);
        for (char& ch : result) {
            if (ch == 'I') i++;
            else if (ch == 'V') v++;
            else if (ch == 'X') x++;
            else if (ch == 'L') l++;
            else if (ch == 'C') c++;
        }
    }

    cout << i << ' ' << v << ' ' << x << ' ' << l << ' ' << c;

    return 0 ;
}
