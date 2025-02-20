#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>
using namespace std;

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
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
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
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    if(sum % 2 == 0 && f(arr, n, sum / 2)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    
    return 0;    
}
