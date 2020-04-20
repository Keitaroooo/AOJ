#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    while (n || x)
    {
        int count = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if(i + i + 1 + i + 2 > x)
            {
                break;
            }
            for (int j = i + 1; j < n; j++)
            {
                if(i + j + j + 1 > x)
                {
                    break;
                }
                if (i + j + n < x)
                {
                    continue;
                }
                
                for (int k = j + 1; k <= n; k++)
                {
                    if(i + j + k == x)
                    {
                        count++;
                        break;
                    }
                }
            }
        }
        cout << count << endl;
        cin >> n >> x;
}

        return 0;
}
