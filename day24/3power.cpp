class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0||n<0){
            return false;
        }
        while(n%3==0){
            n/=3;
        }
        // return (n!==1||n!=2||n!=-1||n!=-2);
        return n==1;
    }
};
