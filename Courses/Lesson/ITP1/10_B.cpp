#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a,b,c,C,S,L,h;
    cin >> a >> b >> C;
    h = b * sin(C*M_PI/180);
    S = a * h / 2;
    c = a - b * cos(C*M_PI / 180);
    c = pow(h * h + c * c, 1. / 2);
    L  = a + b + c;
    cout << fixed << setprecision(5)
         << S << endl
         << L << endl
         << h << endl;
    return 0;
}
