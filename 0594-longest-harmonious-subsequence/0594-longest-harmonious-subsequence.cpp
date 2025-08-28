class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        for (int i = 0; i < n; i++) {
            int a = nums[i], c0 = 0, c1 = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == a) c0++;
                else if (nums[j] == a + 1) c1++;
            }
            if (c0 && c1) ans = ans > c0 + c1 ? ans : c0 + c1;
        }
        return ans;
    }
};
