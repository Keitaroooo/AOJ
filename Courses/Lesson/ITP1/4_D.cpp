#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, a[10000],max ,min;
    double sum;
    cin >> n;

    cin >> a[0];
    max = a[0];
    min = a[0];
    sum = a[0];

    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
        }
        else if (a[i] < min)
        {
            min = a[i];
        }
        sum += a[i];
    }

    cout << min << " " << max  << " " << fixed << setprecision(0) << sum << endl;
    return 0;
}
