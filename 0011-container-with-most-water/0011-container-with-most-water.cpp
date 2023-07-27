class Solution {
public:
    int maxArea(vector<int>& height) {
    int left=0;
    int right=height.size()-1;
    int maxarea=0;
    while(left<=right)
    {
        int currentarea=min(height[left],height[right])*(right-left);
        maxarea=max(currentarea,maxarea);
        if(height[left]<height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }    
    return maxarea;
    }
};