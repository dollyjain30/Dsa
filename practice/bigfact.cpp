#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int go(vector<int>&a,int val,int size)
{
     int carry=0;   
     for(int j=0;j<size;j++){
      int product =a[j]*val+carry;
      a[j]=product%10;
      carry=product/10;
    }
    while(carry){
        a[size]=carry%10;
        carry/=10;
        size++;
    }
    return size;
   
}
    int main(){
    int n;
    cin>>n;
    vector<int>a(500,0);
    int size=1;
    a[0]=1;
    for(int i=2;i<=n;i++){
        size=go(a,i,size);
    }
    for(int i=size-1;i>=0;i--){
        cout<<a[i];
    }
}