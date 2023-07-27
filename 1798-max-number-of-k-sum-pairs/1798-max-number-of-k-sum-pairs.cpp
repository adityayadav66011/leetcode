class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {\
    /*
    sort(nums.begin(),nums.end());
    int count=0;
    int i=0,j=nums.size()-1;
    while(i<j)
    {
        int sum=nums[i]+nums[j];
        if(sum==k)
        {
            count++;
            i++;
            j--;
        }
        else
        if(sum>k)
        {
            j--;
        }
        else
        i++;
    }
    return count;  */
    int ans=0;
    unordered_map<int,int>freqMap;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        if(freqMap[k-nums[i]]>0)
        {
            ans++;
            freqMap[k-nums[i]]--;
        }
        else
        {
            freqMap[nums[i]]++;
        }
    }
    return ans;
    }
};