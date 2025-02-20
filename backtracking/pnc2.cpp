#include<iostream>
#include<string.h>
#include<unordered_set>
using namespace std;

void permutations(string &str,int i){
     if(i==str.size()-1){
        cout<<str<<"\n";
        return;
     }
     unordered_set<char>s;
     for(int idx =i;idx<str.size();idx++){
        if(s.count(str[idx])) continue;
        s.insert(str[idx]);
        swap(str[idx],str[i]);
        permutations(str,i+1);
        
        swap(str[idx],str[i]);//backtracking
     }
}
int main(){
    string str ="aba";
    permutations(str,0);
    return 0;
}