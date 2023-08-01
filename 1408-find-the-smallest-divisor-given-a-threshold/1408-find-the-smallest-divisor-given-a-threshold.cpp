class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
    int minimum=1; 
    int max=*max_element(nums.begin(),nums.end());
    int smallest=max;
    while(minimum<=max) 
    {
        int mid=minimum+(max-minimum)/2;
        float sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=(nums[i]+mid-1)/mid;
        }
        if(sum<=threshold)
        {
            smallest=min(smallest,mid);
           max=mid-1;
        }
        else{
        minimum=mid+1;
    } 
    }
    return smallest;
    }
};