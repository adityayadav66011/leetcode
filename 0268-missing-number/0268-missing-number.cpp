class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int num=0;
    int total=nums.size()*(nums.size()+1)/2;
    for(int i=0;i <nums.size();i++)
    {
        num=num+nums[i];
    }
    return total-num;
    }
};