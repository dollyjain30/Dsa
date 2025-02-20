#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include<queue>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
int v;
void add_edges(int a, int b, bool bi_dir)
{
    graph[a].push_back(b);

    if (bi_dir)
    {
        graph[b].push_back(a);
    }
}
void topoBFS(){
    vector<int>indegree(v,0);
    for(int i=0;i<v;i++){
      for(auto neighbour:graph[i]){
        indegree[neighbour]++;
      }

    }
    queue<int> q;
    unordered_set<int>vis;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
            vis.insert(i);
        }
        while(not q.empty()){
            int node=q.front();
            q.pop();
            for(auto neighbour:graph[node]){
                if(not vis.count(neighbour)){
                    indegree[neighbour]--;
                    if(indegree[neighbour]==0){
                        q.push(neighbour);
                        vis.insert(neighbour);
                    }
                }
            }
        }
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
        int x, y;
        cin >> x>> y;
        add_edges(x, y,false);
    }
    topoBFS();
    return 0;
}