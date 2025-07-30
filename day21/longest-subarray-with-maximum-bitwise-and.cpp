class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxi = -1;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
        }
        int len = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == maxi) {
                len += 1;
                ans = max(ans, len);
            } else {
                len = 0;
            }
        }
        return ans;
    }
};
