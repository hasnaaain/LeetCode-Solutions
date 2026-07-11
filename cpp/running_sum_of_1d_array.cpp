// ======================================
// LeetCode Problem: running sum of 1d array
// Language: cpp
// Link: https://leetcode.com/problems/running-sum-of-1d-array/
// Synced by: LinkCode
// Date: 7/11/2026, 10:29:16 PM
// ======================================


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1; i<nums.size(); i++){
           nums[i] = nums[i]+ nums[i-1];
        }
        return nums;
    }
};