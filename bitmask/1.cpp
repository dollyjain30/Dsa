#include<iostream>
#include<vector>
using namespace std;
#define mod 1000000007
int f(int i,int mask,int n,vector<vector<int>>&c){
    int ans=0;
    if(i==n+1){
        if(mask==0) return 1;
        return 0;
    }
    for(int w=1;w<=n;w++){
        bool available=((1<<(w-1))&mask==0) ?0:1;

        if(available & c[i][w])
        {  
           ans=((ans%mod)+(f(i+1,mask^(1<<(w-1)),n,c))%mod)%mod;     
        }
    }
}
int main(){
    int n;
    cin>>n;

    vector<vector<int> >c(n+1,vector<int>(n+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>c[i][j];
        }
    }
  f(1,(1<<n)-1);

    return 0;
}