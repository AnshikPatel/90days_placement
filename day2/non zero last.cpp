class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        int len=nums.size();
        for(int j=1;j<=count;j++){
            nums.push_back(0);
        }

    }
};
