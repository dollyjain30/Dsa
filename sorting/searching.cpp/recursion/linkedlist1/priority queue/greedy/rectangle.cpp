#include <iostream>
#include <vector>
#include <algorithm>
// #define ll long long int;
using namespace std;
bool cmp(int x, int y)
{
  return x > y;
}
int minCostToBreakGrid(int n, int m, vector<int> &x, vector<int> &y)
{
  sort(x.begin(), x.end(), cmp);
  sort(y.begin(), y.end(), cmp);
  int hz = 1;
  int vr = 1;
  int ans = 0;
  int h = 0, v = 0;
  while (h < y.size() && v < x.size())
  {
    if (x[v] > y[h])
    {
      ans += x[v] * vr;
      hz++;
      v++;
    }
    else
    {
      ans += y[h] * hz;
      vr++;
      h++;
    }
  }
  while (h < y.size())
  {
    ans += y[h] * hz;
    vr++;
    h++;
  }
  while (v < x.size())
  {
    ans += x[v] * vr;
    hz++;
    v++;
  }
  return ans;
}
int main()
{
  int n, m;
  cin >> m >> n;
  vector<int> y;
  vector<int> x;
  for (int i = 0; i < m - 1; i++)
  {
    int a;
    cin >> a;
    x.push_back(a);
  }
  for (int i = 0; i < n - 1; i++)
  {
    int b;
    cin >> b;
    y.push_back(b);
  }
  cout << minCostToBreakGrid(n, m, x, y) << endl;
  return 0;
}