#include <iostream>
using namespace std;

int main()
{
    char c;
    cin.get(c);
    while (c != '\n')
    {
        if(c >= 'A' && c <= 'Z')
        {
            c += 'a'-'A';
        }
        else if (c >= 'a' && c <= 'z')
        {
            c += 'A' - 'a';
        }
        cout << c ;
        cin.get(c) ;
    }
    cout << endl ;
    return 0;
}
