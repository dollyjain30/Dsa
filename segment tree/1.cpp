#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int>st;
void buildtree(int arr[],int i,int lo,int hi){
    if(lo==hi){
        st[i]=arr[lo];
        return;
    }
    int mid=(lo+hi)/2;
    buildtree(arr,2*i+1,lo,mid);
    buildtree(arr,2*i+2,mid+1,hi);
    st[i]=max(st[2*i+1],st[2*i+2]);
}
int getmax(int i,int lo ,int hi,int &l,int &r){
    if(l> hi || r<lo) return INT_MIN;
    if(lo>=l && hi<=r) return st[i];
    int mid=lo+(hi-lo)/2;
    int leftMax=getmax(2*i+1,lo,mid,l,r);
    int rightMax=getmax(2*i+2,mid+1,hi,l,r);
    return max(leftMax,rightMax);
}
int main()
{
    int arr[]={1,4,2,8,6,4,9,3};
    int n=sizeof(arr)/4;
    st.resize(4*n);
    buildtree(arr,0,0,n-1);
    int l,r;
    cout<<"enter the range";
    cin>>l>>r;
    cout<<getmax(0,0,n-1,l,r)<<endl;
    return 0;
}