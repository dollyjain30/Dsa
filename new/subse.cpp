#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxPathSum(const vector<int>& first, const vector<int>& second) {
    int sum1 = 0, sum2 = 0;  // To store sums of both sequences
    int result = 0;  // To store the final result
    int i = 0, j = 0;  // Pointers to traverse both sequences

    int n1 = first.size();
    int n2 = second.size();

    // Traverse both arrays
    while (i < n1 && j < n2) {
        if (first[i] < second[j]) {
            sum1 += first[i++];
        } else if (first[i] > second[j]) {
            sum2 += second[j++];
        } else {
            // Intersection point found
            result += max(sum1, sum2) + first[i];  // Add max of sums and the intersection point value
            sum1 = sum2 = 0;  // Reset sums after crossing the intersection
            i++;
            j++;
        }
    }

    // Add remaining elements of first array
    while (i < n1) {
        sum1 += first[i++];
    }

    // Add remaining elements of second array
    while (j < n2) {
        sum2 += second[j++];
    }

    // Add the maximum of the remaining sums
    result += max(sum1, sum2);

    return result;
}

int main() {
    vector<int> first = {3, 5, 7, 9, 20, 25, 30, 40, 55, 56, 57, 60, 62};
    vector<int> second = {1, 4, 7, 11, 14, 25, 44, 47, 55, 57, 100};

    cout << "Maximum path sum: " << maxPathSum(first, second) << endl;

    return 0;
}
