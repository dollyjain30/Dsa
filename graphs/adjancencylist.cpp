#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;
vector<list<int>> graph;
int v;
void add_edges(int src, int dest, bool bi_dir)
{
    graph[src].push_back(dest);

    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}

void display()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << " -> ";
        for (auto el : graph[i])
        {
            cout << el << " , ";
        }
        cout << "\n";
    }
}

int main()
{
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cin >> e;
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edges(s, d,false);
    }
    display();
    return 0;
}
