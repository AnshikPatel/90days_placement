// class Solution {
// public:
//     int findLucky(vector<int>& arr) {
//         vector<int> result;
//         int count=1;
//         sort(arr.begin(),arr.end());
//         for(int i=0;i<arr.size()-1;i++){
//             if(arr[i]==arr[i+1]){
//                 count++;
//             }
//             else{
//                 if(count==arr[i]){
//                 result.push_back(count);
//                 count=1;
//                 }else{
//                     result.push_back(1);
//                 }
//             }
//         }
//         int k=0;
//         sort(result.begin(),result.end());
//         if(result.back()==1){
//             k=-1;
//         }
//         else{
//             k=result.back();
//         }
//         return k;
//     }
// };

class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(), arr.end());          // Sort the array first

        vector<int> lucky;                     // To store lucky numbers
        int count = 1;                         // Frequency counter

        for (size_t i = 0; i < arr.size() - 1; ++i) {
            if (arr[i] == arr[i + 1]) {        // Same value → increase frequency
                ++count;
            } else {                           // Value changed → evaluate the run
                if (count == arr[i]) {         // Lucky condition
                    lucky.push_back(arr[i]);
                }
                count = 1;                     // Reset for next value
            }
        }

        // Check the last run
        if (count == arr.back()) {
            lucky.push_back(arr.back());
        }

        return lucky.empty() ? -1              // No lucky number found
                             : *max_element(lucky.begin(), lucky.end());
    }
};
