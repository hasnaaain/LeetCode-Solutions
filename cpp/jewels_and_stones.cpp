// ======================================
// LeetCode Problem: jewels and stones
// Language: cpp
// Link: https://leetcode.com/problems/jewels-and-stones/
// Synced by: LinkCode
// Date: 7/18/2026, 10:08:38 PM
// ======================================


class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
         unordered_set<char> jewelSet;

        // Store all jewels in a hash set
        for (char ch : jewels) {
            jewelSet.insert(ch);
        }

        int count = 0;

        for (char ch : stones) {
            if (jewelSet.find(ch) != jewelSet.end()) {
                count++;
            }
        }

        return count;
        
    }
};