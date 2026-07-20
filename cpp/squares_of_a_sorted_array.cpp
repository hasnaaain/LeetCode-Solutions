// ======================================
// LeetCode Problem: squares of a sorted array
// Language: cpp
// Link: https://leetcode.com/problems/squares-of-a-sorted-array/
// Synced by: LinkCode
// Date: 7/20/2026, 11:41:34 PM
// ======================================


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int left = 0, right = n - 1;
        int index = n - 1;

        while (left <= right) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if (leftSquare > rightSquare) {
                ans[index] = leftSquare;
                left++;
            } else {
                ans[index] = rightSquare;
                right--;
            }
            index--;
        }

        return ans;
        
    }
};