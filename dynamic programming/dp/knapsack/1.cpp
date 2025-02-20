

// recursive code

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<climits>
// using namespace std;

// int f(int wt[],int val[],int W,int n){
//   if(n==0 ||W==0){
//     return 0;
//   }
//   if(wt[n-1]<=W){
//     return max(val[n-1]+f(wt,val,W-wt[n-1],n-1),f(wt,val,W,n-1));
//   }

//   else {
//   return f(wt,val,W,n-1);
//   }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int wt[n];
//     int val[n];
//     for(int i=0;i<n;i++){
//         cin>>wt[i];
//     }
//     for(int i=0;i<n;i++){
//         cin>>val[i];
//     }
//     int W;
//     cin>>W;
//     cout<<f(wt,val,W,n);
//    return 0;
// }

// top dowm memozization
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<climits>
// #include<cstring>
// using namespace std;
// int t[102][1002];
// int f(int wt[], int val[], int W, int n) {
//     if (n == 0 || W == 0) {
//         return 0;
//     }
// if(t[n][W]!=-1) return t[n][W];
//     if (wt[n - 1] <= W) {
//         return t[n][W]=max(val[n - 1] + f(wt, val, W - wt[n - 1], n - 1), f(wt, val, W, n - 1));
//     } else {
//         return t[n][W]=f(wt, val, W, n - 1);
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     int wt[n];
//     int val[n];
//     for (int i = 0; i < n; i++) {
//         cin >> wt[i];
//     }
//     for (int i = 0; i < n; i++) {
//         cin >> val[i];
//     }
//     int W;
//     cin >> W;
//     memset(t,-1,sizeof(t));
//     cout << f(wt, val, W, n);
//     return 0;
// }
// // iterative approach
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>
using namespace std;
int main()
{       
    int n;
    cin >> n;   
    int wt[n];
    int val[n];
    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }       
    for (int i = 0; i < n; i++) {   
        cin >> val[i];
    }
    int W;
    cin >> W;
    int t[n+1][W+1];
    // initialisation

    for(int i=0;i<n+1;i++){
        for(int j=0;j<W+1;j++){
            if(i==0||j==0){
                t[i][j]=0;
            }
        }
    }
   for(int i=1;i<n+1;i++)
   {
    for(int j=1;j<W+1;j++)
    {
        if(wt[i-1]<=j){
         t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
        }
        else{
            t[i][j]=t[i-1][j];
        }

    }
    }

    cout<<t[n][W];


    return 0;
}