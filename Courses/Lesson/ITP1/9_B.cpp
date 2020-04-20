#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main()
{
    string s;

    while (true)
    {
        cin >> s;
        if (s == "-")
        {
            break;
        }
        int n = s.length();
        int m;
        cin >> m;
        int sum = 0;
        while (m--)
        {
            int h;
            cin >> h;
            sum += h;
        }

        for (int i = 0; i < n; i++)
        {
            cout << s[(i+sum) % n];
        }
        cout << endl;
    }

    return 0;
}
