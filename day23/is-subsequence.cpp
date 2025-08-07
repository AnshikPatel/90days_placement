class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool flag=false;
        int count=0;
        int fu=0;
        for(int i=0;i<s.size();i++){
            for(int j=fu;j<t.size();j++){
                if(s[i]==t[j]){
                    // flag=true;
                    fu=j+1;
                    count++;
                    break;
                }
                

            }
        }
       
        return s.size()==count;
    }
};
