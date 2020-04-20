#include <iostream>
using namespace std;
#include <string>

int main()
{
    string s;
    cin >> s;
    while (s != "0")
    {
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            sum += s[i] - '0';
        }
        cout << sum << endl;
        cin >> s;
    }
    return 0;
}
