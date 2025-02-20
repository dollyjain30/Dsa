#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n-1;i++){
        cout<<" ";

    }
    
    cout<<"*";
    cout<<endl;
    for(int i=2;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        
        cout<<"*";
        for(int k=1;k<2*i-2;k++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j=1;j<2*(n-i);j++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++){
        cout<<" ";
    }
    cout<<"*";
    return 0;
}