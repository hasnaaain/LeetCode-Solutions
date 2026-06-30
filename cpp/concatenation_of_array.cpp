// ======================================
// LeetCode Problem: concatenation of array
// Language: cpp
// Link: https://leetcode.com/problems/concatenation-of-array/
// Synced by: LinkCode
// Date: 6/30/2026, 5:53:31 PM
// ======================================


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
         vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);
        }

        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);
        }

        return ans;
    }
};