#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n, x[100],y[100];
    cin >> n;

    for (int i = 0; i <  n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    for (int p = 1; p <= 3; p++)
    {
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += pow(abs(x[i] - y[i]),p);
        }
        cout << fixed << setprecision(6) << pow(sum,1./p) << endl;
    }
    double max = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (max < abs(x[i] - y[i]))
        {
            max = abs(x[i] - y[i]);
        }
    }
    cout << fixed << setprecision(6) << max << endl;
    return 0;
}
