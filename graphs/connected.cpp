#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include<unordered_set>
#include<queue>
using namespace std;
vector<list<int>> graph;
int v;


void add_edges(int src, int dest, bool bi_dir=true)
{
    graph[src].push_back(dest);

    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}
void bfs(int node,vector<int>&visited){
    queue<int>q;
    q.push(node);
    visited[node]=1;
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        for(int i=0;i<graph[node].size();i++){
            if(!visited[graph[node][i]]){
              visited[graph[node][i]]=1;
              q.push(graph[node][i]);
            }
        }
    }
}

void dfs(int node,unordered_set<int> &visited)
{
    visited.insert(node);
    for(auto neighbor: graph[node]){
        if(not visited.count(neighbor)){
            dfs(neighbor,visited);
        }
    }
}

int connected_component(){
    int result=0;
    unordered_set<int>visited;
    for(int i=0;i<v;i++){
      if(visited.count(i)==0){
        result++;
        dfs(i,visited);
      }
    }
    return result;
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
        add_edges(s, d);
    }
     cout<<connected_component()<<endl;
    return 0;
}