#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;
    bool flag = true;

    while (flag)
    {
        cin >> a >> op >> b;
        switch (op)
        {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '/':
        if(b == 0)
        {
            cout << "Please enter except 0" << endl;
            break;
        }
            cout << a / b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        default:
            flag = false;
        }
}
    return 0;
}
