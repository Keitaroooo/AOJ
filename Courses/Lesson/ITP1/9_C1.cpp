#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int Taro_score = 0, Hanako_score = 0;
    int m = 'a' - 'A';

    for (int i = 0; i < n; i++)
    {
        string Taro_s, Hanako_s;
        cin >> Taro_s >> Hanako_s;

        for (int i = 0; i < Taro_s.length(); i++)
        {
            if (Taro_s[i] >= 'A' && Taro_s[i] <= 'Z')
            {
                Taro_s[i] += m;
            }
        }
        for (int i = 0; i < Hanako_s.length(); i++)
        {
            if (Hanako_s[i] >= 'A' && Hanako_s[i] <= 'Z')
            {
                Hanako_s[i] += m;
            }
        }

        if (Taro_s > Hanako_s)
        {
            Taro_score += 3;
        }
        else if (Taro_s < Hanako_s)
        {
            Hanako_score += 3;
        }
        else
        {
            Taro_score++;
            Hanako_score++;
        }
    }

    cout << Taro_score << " " << Hanako_score << endl;
    return 0;
}
