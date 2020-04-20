#include <iostream>
#include <string>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int Taro_score = 0, Hanako_score = 0;
    int m = 'a' - 'A';

    for (int i = 0; i <  n; i++)
        {
            string Taro_s, Hanako_s;
            cin >> Taro_s >> Hanako_s;

            if(Taro_s == Hanako_s)
            {
                Taro_score++;
                Hanako_score++;
            }
            else
            {
                int l = Taro_s.length();
                for (int i = 0; i <= l; i++)
                {
                    if (i == l)
                    {
                        Hanako_score += 3;
                        break;
                    }
                    else if(Hanako_s[i] == '\0')
                    {
                        Taro_score += 3;
                        break;
                    }
                    if (Taro_s[i] >= 'A' && Taro_s[i] <= 'Z')
                    {
                        Taro_s[i] += m;
                    }
                    if (Hanako_s[i] >= 'A' && Hanako_s[i] <= 'Z')
                    {
                        Hanako_s[i] += m;
                    }
                    if (Taro_s[i] > Hanako_s[i])
                    {
                        Taro_score += 3;
                        break;
                    }
                    else if (Taro_s[i] < Hanako_s[i])
                    {
                        Hanako_score += 3;
                        break;
                    }
                }
            }
        }
         
    cout << Taro_score << " " << Hanako_score << endl;
    return 0;
}
