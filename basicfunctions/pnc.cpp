#include <iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int combination(int n, int r)
{
    int ncr = (fact(n)) / (fact(r) * fact(n - r));
    return ncr;
}
int main()
{
    int n, r;
    cout << "enter n:";
    cin >> n;

    cout << "enter r:";
    cin >> r;
    // int nfact = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     nfact *= i;
    // }
    // int rfact = 1;
    // for (int i = 1; i <= r; i++)
    // {
    //     rfact *= i;
    // }
    // int nrfact = 1;
    // for (int i = 1; i <= n - r; i++)
    // {
    //     nrfact *= i;
    // }
    // int ncr = (nfact) / (rfact * nrfact);
    // cout << ncr;

    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n - r);
    int ncr = combination(n, r);
    cout << ncr;
    return 0;
}