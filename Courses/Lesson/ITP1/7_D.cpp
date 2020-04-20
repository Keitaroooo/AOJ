#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int n, m, l;
    cin >> n >> m >> l;

    vector<vector <double> > A(n, vector<double>(m));
    vector<vector <double> > B(m, vector<double>(l));
    vector<vector <double> > C(n, vector<double>(l));
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l - 1; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
            cout << fixed << setprecision(0) << C[i][j] << " ";
        }

        C[i][l - 1] = 0;
        for (int k = 0; k < m; k++)
        {
            C[i][l-1] += A[i][k] * B[k][l-1];
        }
        cout << fixed << setprecision(0) << C[i][l - 1] << endl;
    }

    return 0;
}
