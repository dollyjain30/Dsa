// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// using namespace std ;
//  int main(){
//     string s="ABCDEABCD";
//     int n=s.size();
//     int maxi;
//     vector<string>p;
//     vector<string>s;
// string ansS;
// string ansP;

// for(int i = 0; i < n-1; i++) {
//     ansS="";
//     for(int j=0;j<=i;j++){
//        ansS+=s[j];
       
//     }
//     p.push_back(ansS);
//     cout<<endl;
// }
// for(int i = n-1; i >=0; i--) {
//     ansP="";
//     for(int j=n-1;j>=i;j--){
//        ansP+=s[j];
       
//     }
//     s.push_back(ansP);
//     cout<<endl;
// }
// for(int i=0;i<s.size();i++){
//     if(p[i]==s[i]){
//         cout<<s[i];
//     }
// }


//  }
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str = "ABCDEABCD";  // Change variable name to 'str' to avoid conflict
    int n = str.size();
    vector<string> prefixes;
    vector<string> suffixes;  // Correct variable name
    string ansS;
    string ansP;

    // Collecting prefixes
    for (int i = 0; i < n-1; i++) {  // Include n to capture full string as prefix
        ansS = "";
        for (int j = 0; j <=i; j++) {
            ansS += str[j];
        }
        prefixes.push_back(ansS);
        cout << "Prefix: " << ansS << endl; // Printing each prefix
    }

    // Collecting suffixes
    for (int i = 0; i <n-1; i++) {  // Start from 0 for proper order
        ansP = "";
        for (int j = 0; j <=i; j++) {
            ansP = str[n-j-1]+ansP;
        }
        suffixes.push_back(ansP);
        cout << "Suffix: " << ansP << endl; // Printing each suffix
    }

    
    cout << "Common elements in both lists:" << endl;
    for (int i = 0; i <prefixes.size(); i++) {  
        if (prefixes[i] == suffixes[i]) {
            cout << prefixes[i] << endl;
            cout<<"hello";
        }
    }

    return 0;
}
