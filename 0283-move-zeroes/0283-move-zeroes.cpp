class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastnonzeroindex=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[lastnonzeroindex++]=nums[i];
            }
        }
        for(int i=lastnonzeroindex;i<nums.size();i++)
        {
            nums[i]=0;
        }
        
    }
};