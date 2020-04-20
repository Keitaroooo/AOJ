#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double s[1000];
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            sum += s[i];
        }
        double average = sum / n;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (s[i] - average) * (s[i] - average);
        }
        sum /= n;

        cout << fixed << setprecision(5) << pow(sum, 1. / 2) << endl;
    }
    return 0;
}
