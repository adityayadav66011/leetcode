class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    int size=original.size();
    if(size!=m*n)
    return{};
    vector<vector<int>>res(m,vector<int>(n));   
    int row=0;
    int col=0;
    for(int i=0;i<size;i++)
    {
        res[row][col++]=original[i];
        if(col==n)
        {
            col=0;
            row++;
        }
    }
    return res;
    }
};