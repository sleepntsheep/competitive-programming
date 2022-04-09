#include <iostream>
#include <string>

using namespace std;

int main () {
    int n = 0;
    string ns;
    getline(cin, ns);
    n = stoi(ns);
    for (int i = 0; i < n; i++){
        int left = 0;
        int right = 0;
        string s;
        getline(cin, s);
        int l = s.length();
        bool triggered = false;
        for (int j = 0; j < l; j++){
            switch (s[j]){
                case '(':
                    left++;
                    break;
                case ')':
                    right++;
                    break;
                case ' ':
                    break;
                default:
                    triggered = true;
                    break;
            }
            if (right > left){
                triggered = true;
                break;
            }
        }
        if (triggered){
            printf("FALSE\n");
            triggered = false;
        } else if (left == right){
            printf("TRUE\n");
        } else {
            printf("FALSE\n");
        }
    }
}