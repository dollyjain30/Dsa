#include <iostream>
#include <vector>
#define ll long long int
#define pp pair<int,int>
#include <algorithm>
#include <list>
#include<queue>
#include<unordered_set>
#include<unordered_map>
#include<climits>
using namespace std;
vector<list<pair<int,int > > >gr;
void add_edge(int u,int v,int wt,bool bidir=true){
       gr[u].push_back({v,wt});
       if(bidir){
        gr[v].push_back({u,wt});
       }
}
unordered_map<int,int> djikstra(int src,int n)
{
   priority_queue<pp,vector<pp>,greater<pp> >pq;
   unordered_set<int>vis;
   vector<int>via(n+1);
   unordered_map<int,int> mp;
   for(int i=1;i<=n;i++){
    mp[i]=INT_MAX;
   }
   pq.push({-1,src});
   mp[src]=-1;
   int total_count=0;
   int result=0;
   while(!pq.empty()){
    pp curr=pq.top();
    if(vis.count(curr.second)){
        pq.pop();
        continue;
    }
    vis.insert(curr.second);
   
    pq.pop();
    for(auto neighbour : gr[curr.second]){
        if(!vis.count(neighbour.first) and mp[neighbour.first] > mp[curr.second]+neighbour.second ){
            pq.push({mp[curr.second]+neighbour.second,neighbour.first});
            via[neighbour.first]=curr.second;
            mp[neighbour.first]=mp[curr.second]+neighbour.second;
        }
    }
   }
   return mp;


}
int main(){
    int n,m;
    cin>>n>>m;
    gr.resize(n+1,list<pair<int,int> >());
    while(m--){
        int u,v,wt;
        cin>>u>>v>>wt;
        add_edge(u,v,wt);

    }
    int src;
    cin>>src;
    unordered_map<int,int> sp=djikstra(src,n);
   int dest;
   cin>>dest;
   cout<<sp[dest];

    return 0;
}