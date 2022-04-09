#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double pi; double r;
	pi = acos(-1.0);
	cin >> r;
	double area; double peri;
	area = r*r*pi;
	peri = 2*pi*r;
	printf("%.3f\n",area);
	printf("%.3f", peri);
	return 0;
}