#include<iostream>
using namespace std;
int main()
{
    int n=3;
    for(int i=1;i<=2*n+1;i++) cout<<"*";
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
        }
        for(int l=n;l>=i;l--){
            cout<<"*";
        }
        cout<<endl;
    }
}