// ======================================
// LeetCode Problem: find the highest altitude
// Language: cpp
// Link: https://leetcode.com/problems/find-the-highest-altitude/
// Synced by: LinkCode
// Date: 7/14/2026, 11:23:35 PM
// ======================================


class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        int highest = 0;

        for (int g : gain) {
            altitude += g;
            highest = max(highest, altitude);
        }

        return highest;
        
    }
};