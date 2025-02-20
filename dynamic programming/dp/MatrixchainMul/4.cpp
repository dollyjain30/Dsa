#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>
#include<string>
#include<unordered_map>
using namespace std;
bool solve(string a,string b){
    if(a.compare(b)==0) return true;
    if(a.length()<=1) return false;
    int n=a.length();
    bool flag=false;
    for(int i=1;i<=n-1;i++){
        if(solve(a.substr(0,i) , b.substr(n-i,i)) && solve(a.substr(i,n-i),b.substr(0,n-i) ) ||   
        solve(a.substr(0,i) , b.substr(0,i)) && solve(a.substr(i,n-i),b.substr(i,n-i) ))
        {
            flag=true;
            break;
        }
    }
    return flag;
}
unordered_map<string,bool>mp;
bool solveo(string a,string b){
    if(a.compare(b)==0) return true;
    if(a.length()<=1) return false;
    string key=a;
    key.push_back(' ');
    key.append(b);
 if(mp.find(key)!=mp.end()){
    return mp[key];
 }
    int n=a.length();
    bool flag=false;
    for(int i=1;i<=n-1;i++){
        if(solve(a.substr(0,i) , b.substr(n-i,i)) && solve(a.substr(i,n-i),b.substr(0,n-i) ) ||   
        solve(a.substr(0,i) , b.substr(0,i)) && solve(a.substr(i,n-i),b.substr(i,n-i) ))
        {
            flag=true;
            break;
        }
    }
    return mp[key]=flag;
}
int main()
{   string a;
  string b;
  cin>>a>>b;
  if(a.length()!=b.length()) cout<<"false";
  if(a.length()==0 && b.length()==0) cout<<"true";
    
    cout<<solveo(a,b);
    return 0;
}