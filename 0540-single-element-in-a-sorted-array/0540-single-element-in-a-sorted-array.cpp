class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    int left=0;
    int right=nums.size()-1;
    while(left<right)
    {
        int mid=(left+right)/2;
        if((mid%2==0 && nums[mid]==nums[mid+1]) || (mid%2==1 && nums[mid-1]==nums[mid]))
        left=mid+1;
        else
        right=mid;
    }
    return nums[left];
    }
};