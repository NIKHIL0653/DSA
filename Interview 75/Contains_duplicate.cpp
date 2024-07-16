// #include <bits/stdc++.h>

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_set<int> s;
        
//         for (int i = 0; i < nums.size(); i++) {
//             if (s.find(nums[i]) != s.end()) {
//                 return true;
//             }
//             s.insert(nums[i]);
//         }
//         return false;
//     }
// };

#include <iostream>
#include <vector>
#include <unordered_set>
//#include<bits/stdc++.h> // This isn't the best practice for C++ projects
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen; // Use unordered_set for efficient lookups

        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return true; // Found a duplicate
            }
            seen.insert(num); // Add the element to the set
        }
        return false; // No duplicates found
    }
};

int main() {
    // Test Cases
    vector<int> nums1 = {1, 2, 3, 1};
    vector<int> nums2 = {1, 2, 3, 4};

    Solution solution;
    
    cout << "nums1 contains duplicates: " 
         << (solution.containsDuplicate(nums1) ? "true" : "false") << endl;
    
    cout << "nums2 contains duplicates: " 
         << (solution.containsDuplicate(nums2) ? "true" : "false") << endl;

    return 0;
}
