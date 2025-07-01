class Solution {
public:
    int possibleStringCount(string word) {
        int len=word.length();
        int count=len;
        for(int i=1;i<len;i++){
            if(word[i]!=word[i-1]){
                count--;
            }
        }
        return count;
    }
};
