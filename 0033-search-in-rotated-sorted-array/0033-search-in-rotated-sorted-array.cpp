class Solution {
public:
    int search(vector<int>& nums, int target) {
    int n=nums.size();
    int low=0;
    int high=n-1;    
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(nums[mid]==target)
        return mid;
        else
        //left sorted
        if(nums[low]<=nums[mid])
        {
            if(nums[low]<=target && target<=nums[mid])
            high=mid-1;
            else
            low=mid+1;
        }
        else
        //right sorted
        {
            if(nums[high]>=target && target>=nums[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    return -1;
    }
};