class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        return (str1 + str2 == str2 + str1)? str1.substr(0, gcd(size(str1),size(str2))): "";
    }
};
