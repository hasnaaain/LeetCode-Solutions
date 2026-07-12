// ======================================
// LeetCode Problem: number of good pairs
// Language: cpp
// Link: https://leetcode.com/problems/number-of-good-pairs/
// Synced by: LinkCode
// Date: 7/12/2026, 9:55:46 PM
// ======================================


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> ans;
        int pair = 0 ;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j< nums.size(); j++){
                if(nums[i]== nums[j]){
                    pair ++;
                }

            }

        }
        return pair;
    }
};