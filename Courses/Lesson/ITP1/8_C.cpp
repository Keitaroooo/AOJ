#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main()
{
    string s;
    int n = 'z' - 'a';
    vector<int> number(n);

    while (getline(cin, s))
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (isupper(s[i]))
            {
                s[i] = tolower(s[i]);
            }
            number[s[i] - 'a']++;
        }
}
    
    for(int i = 0; i <= n; i++)
    {
        char c = i + 'a';
        cout << c << " : " << number[i] << endl;
    }
    return 0;
}
