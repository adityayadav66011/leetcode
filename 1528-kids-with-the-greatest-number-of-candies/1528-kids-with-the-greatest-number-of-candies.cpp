class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxcandies=0;
    auto it=max_element(candies.begin(),candies.end()); 
    if(it!=candies.end())
    {
      maxcandies=*it;
    }  
    vector<bool> result; 
    for(int i=0;i<candies.size();i++)
    {
        result.push_back(candies[i]+extraCandies>=maxcandies);
    }
    return result;
    }
};