// #include <iostream>
// #include <vector>
// using namespace std;

// void combinationsum(vector<int>& v, int arr[], int n, int target, int idx) {
//     if (target == 0) {
//         for (int i = 0; i < v.size(); i++) {
//             cout << v[i] << " ";
//         }
//         cout << endl;
//         return;
//     }

//     if (target < 0 || idx >= n) return;

//     if (target >= arr[idx]) {
//         v.push_back(arr[idx]);
//         combinationsum(v, arr, n, target - arr[idx], idx);
//         v.pop_back();
//     }

//     combinationsum(v, arr, n, target, idx + 1);
// }

// int main() {
//     int arr[] = {2, 3, 5};
//     vector<int> v;
//     combinationsum(v, arr, 3, 8, 0);
//     return 0;
// }



#include <iostream>
#include <vector>
using namespace std;

void combinationsum(vector<int>& v, int arr[], int n, int target, int idx) {
    if (target == 0) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }

    if (target < 0 || idx >= n) return;

    if (target >= arr[idx]) {
        v.push_back(arr[idx]);
        combinationsum(v, arr, n, target - arr[idx], idx);
        v.pop_back();
    }

    combinationsum(v, arr, n, target, idx + 1);
}

int main() {
    int arr[] = {2, 3, 5};
    vector<int> v;
    combinationsum(v, arr, 3, 8, 0);
    return 0;
}

