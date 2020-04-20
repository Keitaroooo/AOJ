#include <iostream>
using namespace std;

int main()
{
    int n, a[100];
    cin >> n;

    for (int i = 0; i <  n; i++)
        {
            cin >> a[i];
            for (int j = 0; j < i; j++)
            {
                int c;
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    for (int i = 0; i < n - 1; i++)
        {
            cout << a[i] << " ";
        }
    cout << a[n-1] << endl;
    return 0;
}
