#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> v;
    v.push_back(1);
   v.push_back(1);
   v.push_back(1);
   v.push_back(1);
   v.push_back(1);
   v.push_back(1);
   v.push_back(1);
   v.push_back(1);
   v.push_back(1);
//    v.push_back(1);
//    v.push_back(1);


    cout << "Size of the vector: " << v.size() << endl;
    cout << "Capacity of the vector: " <<v.capacity() << endl;

    return 0;
}