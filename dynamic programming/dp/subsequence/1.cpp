#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>
#include<string>
using namespace std;
// recursive code
int static t[1001][1001];
int f(string x,string y,int n ,int m){
    if(n==0 || m==0) return 0;
    if (x[n-1]==y[m-1]) return 1+f(x,y,n-1,m-1);
    return max(f(x,y,n-1,m),f(x,y,n,m-1));
}
int ftd(string x,string y,int n ,int m){
    if(n==0 || m==0) return 0;
    if(t[n][m]!=-1) return t[n][m];
    if (x[n-1]==y[m-1]) return t[n][m]= 1+f(x,y,n-1,m-1);
    return t[n][m]=max(f(x,y,n-1,m),f(x,y,n,m-1));
}
int fbt(string x,string y,int n ,int m){
   for(int i=0;i<n+1;i++){
    for(int j=0;j<m+1;j++){
        if(i==0 || j==0){
            t[i][j]=0;
        }
    }
   }
    for(int i=1;i<n+1;i++){
    for(int j=1;j<m+1;j++){
        if(x[i-1]==y[j-1]){
           t[i][j]=1+t[i-1][j-1];
        }
        else{
            t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
   }
   return t[n][m];
}

int main(){
    string x,y;
    cin>>x>>y;
    int n=x.size();
    int m=y.size();
    memset(t,-1,sizeof(t));
    cout<<fbt(x,y,n,m);
    }