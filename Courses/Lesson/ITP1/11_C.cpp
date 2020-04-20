#include <iostream>
using namespace std;

//N:1,W:2,E:3,S:4
void RotateDice(int *a, int n)
{
    int c = a[0];
    a[0] = a[n];
    a[n] = a[5];
    a[5] = a[5 - n];
    a[5 - n] = c;
}
int main()
{
    int a[6], b[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cin >> b[i];
    }


    for (int j = 0; j < 4; j++)
    {
        if (a[1] == b[1])
        {
            break;
        }
        RotateDice(a, 1);
    }

    if (a[1] != b[1])
    {
        RotateDice(a, 3);
        for (int j = 0; j < 4; j++)
        {
            if (a[1] == b[1])
            {
                break;
            }
            RotateDice(a, 1);
        }
    }

    for (int j = 0; j < 4; j++)
    {
        if (a[0] == b[0])
        {
            break;
        }
        RotateDice(a, 3);
    }

    if (a[0] == b[0] && a[2] == b[2] && a[3] == b[3] && a[4] == b[4])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
