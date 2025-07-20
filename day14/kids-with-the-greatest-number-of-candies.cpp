class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> vt;
        int ma=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            if((extraCandies+candies.at(i))>=ma){
                vt.push_back(true);
            }
            else{
                vt.push_back(false);
            }
        }
    return vt;
    }
};
