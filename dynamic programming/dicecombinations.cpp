#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


// int f(int n) {
//     if (n == 0) return 1;  
//     if (dp[n] != -1) return dp[n];
    
//     int result = 0;
//     for (int i = 1; i <= 6; i++) {
//        if(n-i<0) break;
//        result+=f(n-i);
//     }
    
//     return dp[n] = result;
// }
int fbu(int n) {

  vector<int> dp(n+1,0);
    dp[0] = 1;  // Base case

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i - j >= 0) {
                dp[i] += dp[i - j];
            }
        }
    }

    return dp[n];
}
int main() {
  int n;
    //  dp.clear();
    // dp.resize(105, -1); 
    n = 3;
    // cout << f(n)<<endl;
    cout<<fbu(n);
    return 0;
}