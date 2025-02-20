#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include<unordered_map>
using namespace std;
vector<list<pair<int,int>>> graph;
int v;
void add_edges(int src,int dest,int wt,bool di_dir=true){
graph[src].push_back({dest,wt});
if(di_dir){
    graph[dest].push_back({src,wt});
}

}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto el :graph[i]){
            cout<<el.first<<" "<<el.second;
        }
    }
}
int main(){
cin>>v;
graph.resize(v,list<pair<int,int>>());
int e;
cin>>e;
while(e--){
    int src ,dest,wt;
    cin>>src>>dest>>wt;
add_edges(src,dest,wt);
}
 return 0;
} 