#include<iostream>
#include<algorithm>
#include<climits>
#include<cstring>
using namespace std;

// int solve(int arr[], int i, int j) {
//     if (i >= j) return 0; // Base case: Single matrix
//     int mn = INT_MAX;

//     for (int k = i; k < j; k++) {
//         int temp = solve(arr, i, k) + solve(arr, k + 1 , j) + arr[i - 1] * arr[k] * arr[j];
//         mn = min(mn, temp);
        
//     }
//     return mn;
// }

//optimised  code
int static t[1001][1001];
int solve(int arr[], int i, int j) {
    if (i >= j) return 0; // Base case: Single matrix
    if(t[i][j]!=-1) return t[i][j];
    int mn = INT_MAX;

    for (int k = i; k < j; k++) {
        int temp = solve(arr, i, k) + solve(arr, k + 1 , j) + arr[i - 1] * arr[k] * arr[j];
       
        mn = min(mn, temp);
       
    }
    return t[i][j]=mn;
}
int main() {
    int arr[] = {40, 20, 30, 10, 30};
    int n = 5;
    memset(t,-1,sizeof(t));
    cout << "Minimum cost: " << solve(arr, 1, n - 1);
    return 0;
}

