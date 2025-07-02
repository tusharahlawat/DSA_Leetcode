class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n <= 2) return 0;  // No space to trap water

        vector<int> lmax(n), rmax(n);

        // Step 1: Precompute lmax[]
        int maxLeft = height[0];
        for (int i = 1; i < n; i++) {
            lmax[i] = maxLeft;
            maxLeft = max(maxLeft, height[i]);
        }

        // Step 2: Precompute rmax[]
        int maxRight = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rmax[i] = maxRight;
            maxRight = max(maxRight, height[i]);
        }

        // Step 3: Calculate trapped water
        int totalWater = 0;
        for (int i = 0; i < n; i++) {
            int water = min(lmax[i], rmax[i]) - height[i];
            if (water > 0) totalWater += water;
        }

        return totalWater;
    }
};