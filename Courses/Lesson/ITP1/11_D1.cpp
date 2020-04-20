#include <iostream>
#include <vector>
using namespace std;

void RollN(vector<int> &a)
{
    int c = a[0];
    a[0] = a[1];
    a[1] = a[5];
    a[5] = a[4];
    a[4] = c;
}
void RollE(vector<int> &a)
{
    int c = a[0];
    a[0] = a[3];
    a[3] = a[5];
    a[5] = a[2];
    a[2] = c;
}
void Spin(vector<int> &a)
{
    int c = a[1];
    a[1] = a[2];
    a[2] = a[4];
    a[4] = a[3];
    a[3] = c;
}
bool IsSame(vector<int> &a, vector<int> &b)
{
    for (int i = 0; i < 4; i++)
    {
        if (a[0] == b[0] && a[1] == b[1] && a[2] == b[2] && a[3] == b[3] && a[4] == b[4] && a[5] == b[5])
        {
            return true;
        }
        for (int j = 0; j < 4; j++)
        {
            if (a[0] == b[0] && a[1] == b[1] && a[2] == b[2] && a[3] == b[3] && a[4] == b[4] && a[5] == b[5])
            {
                return true;
            }
            Spin(a);
        }
        RollN(a);
    }
    RollE(a);
    for (int i = 0; i < 2; i++)
    {
        if (a[0] == b[0] && a[1] == b[1] && a[2] == b[2] && a[3] == b[3] && a[4] == b[4] && a[5] == b[5])
        {
            return true;
        }
        for (int j = 0; j < 4; j++)
        {
            if (a[0] == b[0] && a[1] == b[1] && a[2] == b[2] && a[3] == b[3] && a[4] == b[4] && a[5] == b[5])
            {
                return true;
            }
            Spin(a);
        }
        RollE(a);
        RollE(a);
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<vector <int> > a(n,vector<int>(6));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (IsSame(a[0], a[i]))
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
