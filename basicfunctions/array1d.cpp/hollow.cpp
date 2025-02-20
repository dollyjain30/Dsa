#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        cout << " ";
    }
    cout << "*";
    cout << endl;
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 3 - i; j++)
        {
            cout << " ";
        }

        cout << "*";

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << " ";
        }
        cout << "*";

        cout << endl;
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int nsp = 2; nsp <= i; nsp++)
        {
            cout << " ";
        }

        cout << "*";
        for (int j = 1; j <= 7 - 2 * i; j++)
        {
            cout << " ";
        }

        cout << "*";
        cout << endl;
    }
    for (int i = 1; i <= 3; i++)
    {
        cout << " ";
    }
    cout << "*";
}
