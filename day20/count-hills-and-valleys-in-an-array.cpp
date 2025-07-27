class Solution {
public:
    int countHillValley(vector<int>& nums) {
        // Step 1: Remove consecutive duplicates
        vector<int> filtered;
        filtered.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                filtered.push_back(nums[i]);
            }
        }

        // Step 2: Count hills and valleys
        int count = 0;
        for (int i = 1; i < filtered.size() - 1; i++) {
            if ((filtered[i - 1] < filtered[i] && filtered[i] > filtered[i + 1]) ||
                (filtered[i - 1] > filtered[i] && filtered[i] < filtered[i + 1])) {
                count++;
            }
        }

        return count;
    }
};
