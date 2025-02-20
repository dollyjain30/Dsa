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
    void downheap(int idx, int bound)
    {
        while (idx < hp.size())
        {
            int lc = 2 * idx + 1;
            int rc = 2 * idx + 2;
            if (lc >= bound)
                break;
            int maxele = idx;
            if (hp[lc] > hp[maxele])
            {
                maxele = lc;
            }
            if (rc < bound && hp[rc] > hp[maxele])
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
        i--;
        if (!empty())
            downheap(0, i);
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
        for (int j = 0; j < i; j++)
        {
            cout << hp[j] << " ";
        }
        cout << endl;
    }
    Heap(vector<int> v)
    {
        hp = v;
        int n = hp.size() - 1;
        i = n;
        for (int j = ((n / 2) - 1); j >= 0; j--)
        {
            downheap(j, i);
        }
    }

    vector<int> heapsort()
    {
        int s = hp.size();
        while (s > 0)
        {

            swap(hp[0], hp[s - 1]);
            // i--;
            s--;
            downheap(0, s);
        }

        //     for (int j = 0; j < hp.size(); j++)
        //     {
        //         cout << hp[j] << " ";
        //     }
        //     cout << endl;
        // }
        return hp;
    }
};
void heapsort(vector<int> &v)
{
    Heap hp(v);
    v = hp.heapsort();
}
int main()
{
    vector<int> v{9, 6, 1, 19, 3, 8, 12, 5};
    Heap hp(v);

    heapsort(v);

    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j] << " ";
    }
    cout << endl;

    return 0;
}
