#include <iostream>
using namespace std;

int main()
{
    int a[6], c, n, m;
    char command;
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    cin.get(command);
    while (1)
    {
        cin.get(command);
        if (command == '\n')
        {
            break;
        }
        else if (command == 'N')
        {
            n = 1;
        }
        else if (command == 'W')
        {
            n = 2;
        }
        else if (command == 'E')
        {
            n = 3;
        }
        else
        {
            n = 4;
        }

        c = a[0];
        a[0] = a[n];
        a[n] = a[5];
        a[5] = a[5 - n];
        a[5-n] = c;     
    }
    
    cout << a[0] << endl;
    return 0;
}
