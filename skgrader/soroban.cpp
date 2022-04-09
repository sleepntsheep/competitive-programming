#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int n;
    int d;
    cin >> n;

    if (n == 0) {
        cout << "O-|-OOOO" << endl;
        return 1;
    }

    while (n != 0) {
        d = n % 10;
        n /= 10;
        string s;

        switch (d) {
            case 0:
                s = "O-|-OOOO";
                break;
            case 1:
                s = "O-|O-OOO";
                break;
            case 2:
                s = "O-|OO-OO";
                break;
            case 3:
                s = "O-|OOO-O";
                break;
            case 4: 
                s = "O-|OOOO-";
                break;
            case 5:
                s = "-O|-OOOO";
                break;
            case 6:
                s = "-O|O-OOO";
                break;
            case 7:
                s = "-O|OO-OO";
                break;
            case 8:
                s = "-O|OOO-O";
                break;
            case 9:
                s = "-O|OOOO-";
                break;
        }

        cout << s << '\n';
    }
    

}
