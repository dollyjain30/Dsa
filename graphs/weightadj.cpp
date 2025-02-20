#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;
vector<list<pair<int, int>>> graph;
int v;
void add_edges(int src, int dest, int wt, bool bi_dir = true)
{
    graph[src].push_back({dest, wt});
    if (bi_dir)
    {
        graph[dest].push_back({src, wt});
    }
}
void display()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << " -> ";
        for (auto el : graph[i])
        {
            cout << el.first << " , " << el.second << " ";
        }
        cout << "\n";
    }
}

int main()
{
    cin >> v;
    graph.resize(v, list<pair<int, int>>());
    int e;
    cin >> e;
    while (e--)
    {
        int s, d, w;
        cin >> s >> d >> w;
        add_edges(s, d, w);
    }
    display();
    return 0;
}