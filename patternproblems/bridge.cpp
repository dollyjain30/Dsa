#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<char(i+64);
    }
    cout<<endl;
    n=n-1;
    for(int i=1;i<=n;i++){
        
    int k=1;
        for(int j=1;j<=n-i+1;j++){
            cout<<char(k+64);
            k++;
        }
        
        for(int j=1;j<=2*i-1;j++){
            cout<<" ";
            k++;
            
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<char(k+64);
            k++;
        }
        cout<<endl;
    }
    return 0;
}