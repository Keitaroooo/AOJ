#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector <int> > a(r+1, vector<int>(c + 1));

    for (int i = 0; i <  r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
            sum += a[i][j];
        }
        a[i][c] = sum;
    }

    for (int j = 0; j <= c; j++)
    {
        int sum = 0;
        for (int i = 0; i < r; i++)
        {
            sum += a[i][j];
        }
        a[r][j] = sum;
    }

    for (int i = 0; i <= r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << a[i][c] << endl;
    }

    return 0;
}
