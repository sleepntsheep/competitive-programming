#include <stdio.h>
#include <iostream>
#include <string>

class Dice {
    int A[6] = { 1, 2, 3, 5, 4, 6 };

    void swap(int a, int b){
        int t1 = A[a], t2= A[b];
        A[b] = t1;
        A[a] = t2;
    }

public:
    void F() {
        swap(0, 1);
        swap(0, 5);
        swap(3, 0);
    }

    void B() {
        swap(0, 1);
        swap(3, 1);
        swap(5, 1);
    }

    void C() {
        swap(1, 2);
        swap(3, 1);
        swap(4, 1);
    }

    void D() {
        swap(1, 4);
        swap(3, 1);
        swap(2, 1);
    }

    void L() {
        swap(0, 2);
        swap(5, 0);
        swap(4, 0);
    }

    void R() {
        swap(0, 4);
        swap(0, 5);
        swap(0, 2);
    }

    int front() {
        return A[1];
    }

    void all() {
        for (int i = 0; i < 6; i++)
            std::cout << A[i] << ' ';
        std::cout << std::endl;
    }
};

int main() {
    int n;
    scanf("%d", &n);
    Dice D[n];
    for (int i = 0; i < n; i++)
    {
        std::string e;
        std::cin >> e;
        for (int j = 0; j < e.length(); j++) {
            switch (e[j]) {
                case 'F':
                    D[i].F();
                    break;
                case 'B':
                    D[i].B();
                    break;
                case 'L':
                    D[i].L();
                    break;
                case 'R':
                    D[i].R();
                    break;
                case 'D':
                    D[i].D();
                    break;
                case 'C':
                    D[i].C();
                    break;
            }
        }
//        D[i].all();
        std::cout << D[i].front() << ' ';
    }
}
