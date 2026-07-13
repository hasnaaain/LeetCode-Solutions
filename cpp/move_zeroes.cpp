// ======================================
// LeetCode Problem: move zeroes
// Language: cpp
// Link: https://leetcode.com/problems/move-zeroes/
// Synced by: LinkCode
// Date: 7/13/2026, 7:55:29 PM
// ======================================


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
          int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                swap(nums[right], nums[left]);
                left++;
            }
        }
    }
};