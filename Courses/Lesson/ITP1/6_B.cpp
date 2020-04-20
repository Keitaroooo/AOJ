#include <iostream>
using namespace std;

int main()
{
    int n;
    bool a[4][13];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            a[i][j] = false;
        }
    }
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int rank;
        char suit;
        cin >> suit >> rank;

        if (suit == 'S')
        {
            a[0][rank-1] = true;
        }
        else if (suit == 'H')
        {
            a[1][rank-1] = true;
        }
        else if (suit == 'C')
        {
            a[2][rank-1] = true;
        }
        else if (suit == 'D')
        {
            a[3][rank-1] = true;
        }
    }

    for (int i = 0; i < 13; i++)
    {
        if(a[0][i] == false)
        {
            cout <<  "S " << i+1 << endl;
        }
    }
    for (int i = 0; i < 13; i++)
    {
        if(a[1][i] == false)
        {
            cout << "H " << i+1 << endl;
        }
    }
    for (int i = 0; i < 13; i++)
    {
        if(a[2][i] == false)
        {
            cout << "C " << i+1 << endl;
        }
    }
    for (int i = 0; i < 13; i++)
    {
        if(a[3][i] == false)
        {
            cout << "D " << i+1 << endl;
        }
    }

    return 0;
}
