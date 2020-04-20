#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main()
{
    string s, p;
    int n;
    cin >> s >> p;
    s += s;
    for (int i = 0; i < s.length(); i++)
    {
        n = 0;

        if (s[i] == p[0])
        {
            n++;
            for (int j = 1; j < p.length(); j++)
            {
                if (s[i + j] == p[j])
                {
                    n++;
                }
                else 
                {
                    break;
                }
            }
            if (n == p.length())
            {
                 cout << "Yes" << endl;
                 return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
