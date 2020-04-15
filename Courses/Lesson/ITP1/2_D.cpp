#include <iostream>
using namespace std;

int main()
{
    int W,H,x,y,r;
    cin >> W >> H >> x >> y >> r;
    if(r > x || r > y)
    {
        cout << "No" << endl;
    }
    else if (x + r > W || y + r > H)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
    
    return 0;
}
