#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>
using namespace std;
int f(int arr[],int n,int sum){
   int t[n + 1][sum + 1];
    
    // Initialize the table
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= sum; j++) {
            if(j == 0)
                t[i][j] = 0;
            else
                t[i][j] = INT_MAX - 1; // Initialize other elements to INT_MAX-1
        }
    }

    // Populate the DP table
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= sum; j++) {
            if(arr[i - 1] <= j) {
                t[i][j] = min(1 + t[i][j - arr[i - 1]], t[i - 1][j]);
            }
            else {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    
    return t[n][sum];
}
int main()
{       
    int n;
    cin >> n;  
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int sum;
    cin>>sum;
    cout<<f(arr,n,sum);

return 0;    
}