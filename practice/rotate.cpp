#include <iostream>
using namespace std;
int main(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
       cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        if(i%2==0){
            
               for(int j=2;j>=0;j--){
                 cout<<a[i][j];
               }
            
        }
        else{
            for(int j=0;j<3;j++){
              cout<<a[i][j];
            }
        }
        cout<<endl;
    }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //    cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
return 0;
}