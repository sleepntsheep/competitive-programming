#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int x = 0, y = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        switch (s[i]){
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'W':
                x--;
                break;
            case 'E':
                x++;
                break;
            case 'Z':
                x = 0; y = 0;
                break;
        }
    }
    cout << x << " " << y;
    return 0;
}