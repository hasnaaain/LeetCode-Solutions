// ======================================
// LeetCode Problem: two sum
// Language: cpp
// Link: https://leetcode.com/problems/two-sum/
// Synced by: LinkCode
// Date: 7/10/2026, 11:12:38 PM
// ======================================


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         for (int i = 0; i < nums.size(); i++) {

            for (int j = i + 1; j < nums.size(); j++) {

                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }

            }
        }

        return {};
    }
};