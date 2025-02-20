#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>
using namespace std;
// int t[102][1002];
// int ftd(int arr[],int n,int sum){
//     if (sum==0) return 1;
//     if(n==0) return 0;
//     if(t[n][sum]!=-1) return t[n][sum];
//     if(arr[n-1]<=sum)
// {
//     return t[n][sum]=ftd(arr,n-1,sum-arr[n-1]) ||ftd(arr,n-1,sum);
// }
// else return  t[n][sum]=ftd(arr,n-1,sum);
// }
int f(int arr[], int n, int sum) {
    int t[102][1002];
    
        
     for(int i = 0; i < n + 1; i++) {
        for(int j = 0; j < sum + 1; j++) {
            if(i == 0) {
                t[i][j] = 0;
            }
            if(j == 0) {
                t[i][j] = 1;
            }
        }
    }
    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < sum + 1; j++) {
            if(arr[i - 1] <= j) {
                t[i][j] = t[i - 1][j - arr[i - 1]] + t[i - 1][j];
            }
            else {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    
    return t[n][sum];
}

int main() {       
    int n;
    cin >> n;  
    int sum ;
    
    cin>>sum;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout<<f(arr,n,sum);
    
    // cout<<ftd(arr,n,sum);
    
    
    return 0;    
}
