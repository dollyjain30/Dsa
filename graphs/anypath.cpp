#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
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


bool dfs(int curr, int end)
{
    if (curr == end)
        return true;

    visited.insert(curr); //mark visited

    for (auto neighbour : graph[curr])
    {
        if (not visited.count(neighbour))
        {
            bool result = dfs(neighbour, end);
            if (result)
            return true;
        }
    }

    return false;
}
bool anypath(int src, int dest)
{
    return dfs(src, dest);
}

int main()
{
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cin >> e;
    visited.clear();
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edges(s, d, true);
    }
    int x, y;
    cin >> x >> y;
    cout << anypath(x, y);
    return 0;
}