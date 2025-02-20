// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     string str = "ababc";
//     string temp, ans;
    
//     for (int i = 0; i < str.size(); i++) {
//         for (int j = i; j < str.size(); j++) {
//             temp = "";
//             for (int k = i; k <= j; k++) {
//                 temp += str[k];
//             }
//             bool hasRepeating = false;
//             if (ans.size() < temp.size()) {
//                 vector<int> record(26, 0);
//                 for (int s = 0; s < temp.size(); s++) {
//                     record[temp[s] - 'a']++;
//                 }
//                 for (int s = 0; s < temp.size(); s++) {
//                     if (record[s] > 1) {
//                         hasRepeating = true;
//                         break;
//                     }
//                 }
//                 if (!hasRepeating) {
//                     ans = temp;
//                 }
//             }
//         }
//     }

//     cout << "Maximum Length is : " << ans.size() << " and answer string is : " << ans << endl;
//     return 0;
// }
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string str="ababcdbbefghij";
    string temp,ans;
    for(int i=0;i<str.size();i++){
            temp="";
        for(int j=i;j<str.size();j++){
            // for(int k=i;k<=j;k++){
                temp+=str[j];
            // }
            
            bool repeat=false;
            if(ans.size()<temp.size()){
            vector<int>check(26,0);
            for(int i=0;i<str.size();i++){
                check[temp[i]-'a']++;
            }
            for(int i=0;i<temp.size();i++){
                if(check[i]>1){
                    repeat=true;
                    break;
                }
            }

            if(repeat==false){
                ans=temp;
            }
        }
    }
    }
    cout<<ans.size()<<" "<<ans;

}