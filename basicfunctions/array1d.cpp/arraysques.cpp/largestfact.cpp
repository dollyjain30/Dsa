#include <iostream>
using namespace std;
int max(int a[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    // cout << max;
    cout << endl;
    return max;
}
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int a[5];
    cout << "enter the numbers of the array";
    int z = max(a, 5);
    fact(z);
    cout << "The factorial of the numnber : " << fact(z);
}