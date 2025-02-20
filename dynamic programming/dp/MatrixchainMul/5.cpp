#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>
#include<string>
using namespace std;
int solve(int e,int f){
    if(e==1) return f;
    if(f==0 || f==1) return f;
    int mn =INT_MAX;
    for(int k=1;k<=f;k++){
        int temp=1+max(solve(e-1,k-1),solve(e,f-k));
        mn=min(mn,temp);
    }
    return mn;
}
int static t[15][55];
int solveo(int e,int f){
    if(e==1) return f;
    if(f==0 || f==1) return f;
    if(t[e][f]!=-1) return t[e][f];
    int mn =INT_MAX;
    for(int k=1;k<=f;k++){
        int temp=1+max(solve(e-1,k-1),solve(e,f-k));
        mn=min(mn,temp);
    }
    return t[e][f]= mn;
}
int solveop(int e, int f) {
    if (e == 1) return f;
    if (f == 0 || f == 1) return f;
    if (t[e][f] != -1) return t[e][f];
    int mn = INT_MAX;
    int lo, hi;
    for (int k = 1; k <= f; ++k) {
        if (t[e - 1][k - 1] != -1) {
            lo = t[e - 1][k - 1];
        }
        else {
            lo = solveop(e - 1, k - 1);
        }
        if (t[e][f - k] != -1) {
            hi = t[e][f - k];
        }
        else {
            hi = solveop(e, f - k);
        }
        int temp = 1 + max(lo, hi);
        mn = min(mn, temp);
    }
    return t[e][f] = mn;
}

int main() {
    int e, f;
    cin >> e >> f;
    memset(t, -1, sizeof(t));
    cout << solveop(e, f);
    return 0;
}