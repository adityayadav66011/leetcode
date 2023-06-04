class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n= sentences.size();
        int curr=0;
        int max_length=0;
        for(int i=0;i<n;i++)
        {
        curr= count(sentences[i].begin(),sentences[i].end(),' ')+1;
        max_length=max(max_length,curr);
               } 
          return max_length;
        }
        
};