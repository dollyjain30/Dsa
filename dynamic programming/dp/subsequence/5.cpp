#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>
#include<string>
using namespace std;
// recursive code
int static t[1001][1001];


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
   int lcs=fbt(x,y,n,m);
   cout<<lcs<<endl;
    int insertion =m-lcs;
    int deletion =n-lcs;
    cout<<"insertion "<<insertion<<" "<<"deletion "<<deletion<<" ";

    }