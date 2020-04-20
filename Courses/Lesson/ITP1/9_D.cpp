#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int q;
    cin >> q;

    for (int i = 0; i <  q; i++)
        {
            string command;
            cin >> command;
            int a, b;
            cin >> a >> b;
            if(command == "print")
            {
                for (; a <= b; a++)
                {
                    cout << str[a];
                }
                cout << endl;
            }
            else if(command == "reverse")
            {
                for (; a < b;a++,b--)
                {
                    swap(str[a], str[b]);
                }
            }
            else
            {
                string p;
                cin >> p;
                for (int i = 0; a+i <= b; i++)
                {
                    str[a+i] = p[i];
                }
            }
        }
    return 0;
}
