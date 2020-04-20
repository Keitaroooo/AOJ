#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int H,W;
    
    cin >> H >> W;

    while(H || W)
    {
        for (int i = 0; i < H; i ++)
        {
            for (int j = 0; j < W; j++)
            {
                cout << '#';
            }
            cout << endl;
        }
        cout << endl;
        cin >> H >> W;
    }

    return 0;
}
