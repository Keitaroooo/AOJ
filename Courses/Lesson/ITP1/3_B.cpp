#include <iostream>
using namespace std;

int main()
{
    int x[10000];
    int i;

    i = 0;
    do
    {
        i++;
        cin >> x[i];
    } while (x[i]);

    i = 1;
    while (x[i])
    {
        cout << "Case " << i << ": " << x[i] << endl;
        i++;
    }

    return 0;
}
