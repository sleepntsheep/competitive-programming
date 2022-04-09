#include <iostream>

using namespace std;

int main() {
    string days[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    int one;
    bool specialFeb;
    int month;
    cin >> one >> specialFeb >> month;

    int dim[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (specialFeb)
        dim[1] = 29;

    int cmonth = 1;

    for (int i = 0; i < month - 1; i++) {
        one += dim[i] % 7;
        if (one > 6)
            one -= 7;
    }

    for (string d : days) {
        cout << d << "    ";}
    cout <<endl;

    int ed = one - 1;
    if (ed < 0)
        ed += 7;

    for (int i = 0; i < ed; i++)
        cout << "       ";

    for (int i = 1; i <= dim[month-1]; i++) {
        cout << i << "     ";
        if (i < 10)
            cout << ' ';
        ed++;
        if (ed > 6){
            ed = 0;
            cout << endl;
        }
    }


}
