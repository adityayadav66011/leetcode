class Solution {
public:
    string reverseWords(string s) {
    istringstream iss(s);
    vector<string>words;
    string word;
    while(iss>>word)
    {
        words.push_back(word);
    }    
    string reversed;
    for(int i=words.size()-1;i>=0;i--)
    {
        reversed+=words[i];
        if(i>0)
        {
            reversed+=" ";
        }
    }
    return reversed;
    }
};