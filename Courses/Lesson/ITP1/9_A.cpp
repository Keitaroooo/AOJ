#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main()
{
    string W, T;
    int count = 0;
    int n = 'a' - 'A';
    cin >> W >> T;
    while(T != "END_OF_TEXT")
    {
        for (int i = 0; i < T.length(); i++)
        {
            if(T[i] >='A' && T[i] <= 'Z')
            {
                T[i] += n;
            }
        }
        if (T == W)
        {
            count++;
        }
        cin >> T;
    }

    cout << count << endl;

    return 0;
}
