// ======================================
// LeetCode Problem: find the highest altitude
// Language: cpp
// Link: https://leetcode.com/problems/find-the-highest-altitude/
// Synced by: LinkCode
// Date: 6/30/2026, 5:48:37 PM
// ======================================


class Solution {
public:
    int largestAltitude(vector<int>& gain) {
         int altitude = 0;
        int maxAltitude = 0;

        for (int g : gain) {
            altitude += g;
            maxAltitude = max(maxAltitude, altitude);
        }

        return maxAltitude;
        
    }
};