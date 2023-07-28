class Solution {
public:
    int findMin(vector<int>& nums) {
    int n=nums.size();
    int left=0;
    int right=n-1;
    int ans=INT_MAX;
    if(nums.size()==0)
    return nums[0];
    if(nums[0]<nums[n-1])
    return nums[0];
    while(left<=right)
    {
        int mid=(left+right)/2;
        //left sorted
        if(nums[mid] >= nums[left])
        {
            ans=min(nums[left],ans);
            left=mid+1;
        }
        //right sorted
        else
        right=mid-1;
            ans=min(ans,nums[mid]);
    }    
    return ans;
    }
};