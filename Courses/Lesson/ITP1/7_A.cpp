#include <iostream>
using namespace std;

int main()
{
    int m, f, r;
    cin >> m >> f >> r;

    while (m != -1 || f != -1 || r != -1)
    {
        if(m == -1 || f == -1)
        {
            cout << 'F' << endl;
        }
        else
        {
            int total = m + f;
            if(total >=80)
            {
                cout << 'A' << endl;
            }
            else if(total >= 65)
            {
                cout << 'B' << endl;
            }
            else if (total >= 50)
            {
                cout << 'C' << endl;
            }
            else if (total >= 30)
            {
                if(r >=50)
                {
                    cout << 'C' << endl;
                }
                else
                {
                    cout << 'D' << endl;
                }
            }
            else
            {
                cout << 'F' << endl;
            }
            
        }
        cin >> m >> f >> r;
    }
        return 0;
}
