#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> generateSubsetSums(const vector<int>& nums) {
    int n = nums.size();
    vector<int> subsetSums;
    
    // There are 2^n possible subsets
    int numSubsets = 1 << n;
    
    for (int mask = 0; mask < numSubsets; ++mask) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                sum += nums[i];
            }
        }
        subsetSums.push_back(sum);
    }
    
    return subsetSums;
}

// Function to count subsets with sum in range [A, B]
int countValidSubsets(const std::vector<int>& nums, int A, int B) {
    int n = nums.size();
    int mid = n / 2;
    
    vector<int> firstHalf(nums.begin(), nums.begin() + mid);
    vector<int> secondHalf(nums.begin() + mid, nums.end());
    
    vector<int> firstSums = generateSubsetSums(firstHalf);
    vector<int> secondSums = generateSubsetSums(secondHalf);
    
    // Sort secondSums to use binary search
    sort(secondSums.begin(), secondSums.end());
    
    int count = 0;
    
    for (int sum1 : firstSums) {
        int low = A - sum1;
        int high = B - sum1;
        
        // Find the range of sums in secondSums that fit within [low, high]
        auto lower = lower_bound(secondSums.begin(), secondSums.end(), low);
        auto upper = upper_bound(secondSums.begin(), secondSums.end(), high);
        
        count += (upper - lower);
    }
    
    return count;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> nums(N);
    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
    }

    int result = countValidSubsets(nums, A, B);
    cout << result << std::endl;

    return 0;
}
