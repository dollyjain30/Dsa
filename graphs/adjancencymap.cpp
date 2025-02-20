// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <unordered_map>
// using namespace std;
// vector<unordered_map<int, int> > graph;
// int v;
// void add_edges(int src, int dest, int wt, bool bi_dir = true)
// {
//     graph[src][dest] =wt;
//     if (bi_dir)
//     {
//        graph[dest][src] =wt;
//     }
// }
// void display()
// {
//     for (int i = 0; i < graph.size(); i++)
//     {
//         cout << i << " -> ";
//         for (auto el : graph[i])
//         {
//             cout << el.first << " , " << el.second << " ";
//         }
//         cout << "\n";
//     }
// }

// int main()
// {
//     cin >> v;
//     graph.resize(v, unordered_map<int, int> ());
//     int e;
//     cin >> e;
//     while (e--)
//     {
//         int s, d, w;
//         cin >> s >> d >> w;
//         add_edges(s, d, w);
//     }
//     display();
//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
vector<unordered_map<int, int> > graph;
int v;
void add_edges(int src, int dest, bool bi_dir = true)
{
    graph[src][dest] =1;
    if (bi_dir)
    {
       graph[dest][src] =1;
    }
}
void display()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << " -> ";
        for (auto el : graph[i])
        {
            cout << el.first << " "<<el.second<<" ";
        }
        cout << "\n";
    }
}

int main()
{
    cin >> v;
    graph.resize(v, unordered_map<int, int> ());
    int e;
    cin >> e;
    while (e--)
    {
        int s, d;
        cin >> s >> d ;
        add_edges(s, d);
    }
    display();
    return 0;
}