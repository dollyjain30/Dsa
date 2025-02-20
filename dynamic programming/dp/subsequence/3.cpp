#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>
#include<string>
using namespace std;
int static t[1001][1001];
string fbt(string x,string y,int n ,int m){
    string result="";
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
            t[i][j]=0;
        }
    }
   }
 int i = n, j = m;
    
    while (i > 0 && j > 0) {
        if (x[i - 1] == y[j - 1]) {
            result = x[i - 1] + result;
            i--;
            j--;
        }
        else if (t[i - 1][j] > t[i][j - 1]) {
            i--;
        }
        else {
            j--;
        }
    }

    return result;
}

int main(){
    string x,y;
    cin>>x>>y;
    int n=x.size();
    int m=y.size();
    memset(t,-1,sizeof(t));
    cout<<fbt(x,y,n,m);
    }