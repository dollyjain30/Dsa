#include<iostream>
#include<vector>
#include<algorithm>

#include<climits>
#include<cstring>

using namespace std;
int t[1005][1005];
int f(int arr[],int n,int s1){
    if (s1==0) return 1;
    if(n==0) return 0;
    if(t[n][s1]!=-1) return t[n][s1];
    if(arr[n-1]<=s1)
{
    return t[n][s1]=f(arr,n-1,s1-arr[n-1]) +f(arr,n-1,s1);
}
else return  t[n][s1]=f(arr,n-1,s1);
}
int main(){
     int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int diff;
    cin>>diff;
    int sum = 0;
     memset(t, -1, sizeof(t));
    for (int i = 0; i < n; i++) sum += arr[i];
    int s1=(diff+sum)/2;
    cout<<f(arr,n,s1);

}
