class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    int left = 0;
    int right = 0;
    int MAX = 0;
    
    int numZeroes = 0;
    for (right= 0; right<nums.size(); right++) {

        if (nums[right]==0) numZeroes++;
        
        if (numZeroes > k) {
            if (nums[left]==0) numZeroes--;
            left ++;
        }
        if (numZeroes <= k) {
            MAX = max(MAX, right-left +1 );
        }
    }
    return MAX;    
    }
};