#include <iostream>
using namespace std;

int main()
{
    int x[3000],y[3000];
    int i;

    i = 0;
    do
    {
        i++;
        cin >> x[i] >> y[i] ;
    } while (x[i] || y[i]);

    i = 1;
    while (x[i] || y[i])
    {
        if (x[i] > y[i])
        {
            int c;
            c = x[i];
            x[i] = y[i];
            y[i] = c;
        }
        cout << x[i] << " " << y[i] << endl;
        i++;
    }

    return 0;
}
