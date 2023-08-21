class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.length()!=B.length())
            return 0;
        A+=A;
        if(A.find(B)!=string::npos) 
            return true;
        return false;
    }
};