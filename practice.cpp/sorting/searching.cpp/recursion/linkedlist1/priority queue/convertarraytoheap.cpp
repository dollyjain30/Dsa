#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Heap
{
    vector<int> hp;
    int i;
    void unheap(int ci)
    {
        while (ci > 0)
        {
            int pi = (ci - 1) / 2;
            if (hp[pi] < hp[ci])
            {
                swap(hp[pi], hp[ci]);
                ci = pi;
            }
            else
            {
                break;
            }
        }
    }
    void downheap(int idx)
    {
        while (idx < hp.size())
        {
            int lc = 2 * idx + 1;
            int rc = 2 * idx + 2;
            if (lc >= hp.size())
                break;
            int maxele = idx;
            if (hp[lc] > hp[maxele])
            {
                maxele = lc;
            }
            if (rc < hp.size() && hp[rc] > hp[maxele])
            {
                maxele = rc;
            }
            if (maxele != idx)
            {
                swap(hp[idx], hp[maxele]);
                idx = maxele;
            }
            else
            {
                break;
            }
        }
    }

public:
    void push(int element)
    {
        hp.push_back(element);
        unheap(hp.size() - 1);
    }
    void pop()
    {
        if (empty())
            return;
        swap(hp[0], hp[hp.size() - 1]);
        hp.pop_back();
        downheap(0);
    }
    int peak()
    {
        if (empty())
            return INT_MIN;
        return hp[0];
    }
    bool empty()
    {
        return hp.size() == 0;
    }
    void display()
    {
        for (int i = 0; i < hp.size(); i++)
        {
            cout << hp[i] << " ";
        }
        cout << endl;
    }
    Heap(vector<int> v)
    {
        hp = v;
        for (int i = 1; i < hp.size(); i++)
        {
            unheap(i);
        }
    }
};
int main()
{
    vector<int> v{9, 6, 1, 19, 3, 2, 8, 12, 5};
    Heap hp(v);
    hp.display();
    return 0;
}
