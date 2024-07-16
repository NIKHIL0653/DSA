// #include <iostream>
// #include <vector>
// #include <climits> // For INT_MIN

// using namespace std;

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxSum = INT_MIN;
//         int currentSum = 0;

//         for (int num : nums) {
//             currentSum = max(num, currentSum + num);
//             maxSum = max(maxSum, currentSum);
//         }

//         return maxSum;
//     }
// };

// int main() {
//     // Create an array
//     vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

//     // Create a Solution object
//     Solution solver;

//     // Call the maxSubArray function and get the result
//     int maxSum = solver.maxSubArray(nums);

//     // Output the result
//     cout << "Maximum contiguous sum is " << maxSum << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
#include <climits> 

using namespace std;

class Solution {
public:
    vector<int> maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currentSum = 0;
        int start = 0, end = 0; 

        for (int i = 0; i < nums.size(); i++) {
            if (currentSum < 0) { // Reset if currentSum becomes negative
                currentSum = nums[i];
                start = i;
            } else {
                currentSum += nums[i];
            }

            // Update maxSum and subarray indices
            if (currentSum > maxSum) {
                maxSum = currentSum;
                end = i;
            }
        }

        return vector<int>(nums.begin() + start, nums.begin() + end + 1);
    }
};

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    Solution solver;

    vector<int> maxSubarray = solver.maxSubArray(nums);
    int maxSum = 0;
    
    for (int num : maxSubarray) {
        maxSum += num;
    }

    cout << "Maximum contiguous sum is " << maxSum << endl;
    cout << "Subarray: ";
    for (int num : maxSubarray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}



