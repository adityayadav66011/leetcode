class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int opened = 0;
        int n=s.size();
        for (int i=0;i<n;i++)
         {
            int c=s[i];
            if (c == '(' && opened++ > 0) res += c;
            if (c == ')' && opened-- > 1) res += c;
        }
        return res;
    }    
};