#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s,p;
    cin>>s>>p;
    vector<int>ans;
    vector<int> cnt_s(26,0),cnt_p(26,0);
    int n=s.size();
    int m=p.size();
    if(m>n ){
        cout<<"No";
    }
    else{
    for(int i=0;i<m;i++){
        cnt_p[p[i]-'a']++;
    }
    int i=0;
    for(i=0;i<m;i++){
        cnt_s[s[i]-'a']++;

    }
    bool fl=true;
    for(int j=0;j<26;j++){
        if(cnt_s[j]!=cnt_p[j]){

            fl=false;
            break;
        }
    }
    if(fl==true){
        ans.push_back(0);
    }
    while(i<n){
        cnt_s[s[i-m]-'a']--;
        cnt_s[s[i]-'a']++;
        bool fl=true;
        for(int j=0;j<26;j++){
            if(cnt_s[j]!=cnt_p[j]){

            fl=false;
            break;
        }
        }
        if(fl==true) ans.push_back(i-m+1);
        i++;
    }
    cout<<"indices are \n";
    for(auto x : ans ){
        cout<<x<<" ";
        cout<<"hello \"hello\" ";
    }
    }
}