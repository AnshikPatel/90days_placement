class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char> st;
        int ans=0;
        for(auto i:s){
            if(y>x){
                if(!st.empty() && st.top()=='b' && i=='a')ans+=y, st.pop();
                else st.push(i);
            }
            else{
                if(!st.empty() && st.top()=='a' && i=='b')ans+=x, st.pop();
                else st.push(i);
            }
        }
        string rem="";
        while(!st.empty())rem+=st.top(), st.pop();
        reverse(rem.begin(), rem.end());
        for(auto i:rem)
        {
            if(y>x){
                if(!st.empty() && st.top()=='a' && i=='b')ans+=x, st.pop();
                else st.push(i);
            }
            else{
                if(!st.empty() && st.top()=='b' && i=='a')ans+=y, st.pop();
                else st.push(i);
            }
        }
        return ans;
    }
};
