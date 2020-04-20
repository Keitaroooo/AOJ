#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double x1, y1, x2, y2,distance;
    cin >> x1 >> y1 >> x2 >>y2;
    distance = pow(pow((x1 - x2), 2) + pow((y1 - y2), 2), 1. / 2);
    cout << fixed << setprecision(5) << distance << endl;
    return 0;
}
