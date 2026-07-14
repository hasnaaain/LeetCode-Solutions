// ======================================
// LeetCode Problem: max consecutive ones
// Language: cpp
// Link: https://leetcode.com/problems/max-consecutive-ones/
// Synced by: LinkCode
// Date: 7/14/2026, 11:28:46 PM
// ======================================


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
          int count = 0;
        int maxi = 0;

        for (int num : nums) {
            if (num == 1) {
                count++;
                maxi = max(maxi, count);
            } else {
                count = 0;
            }
        }

        return maxi;
    }
};