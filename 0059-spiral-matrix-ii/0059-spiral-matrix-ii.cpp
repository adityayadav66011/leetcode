class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int k=1;
    int startrow=0,endrow=n-1;
    int startcol=0,endcol=n-1;
    vector<vector<int>> matrix(n, vector<int>(n));
    while(startrow<endrow && startcol<endcol)
    {
        for(int col=startcol;col<=endcol;col++)
        {
            matrix[startrow][col]=k;
            k++;
        }
        startrow++;
        for(int row=startrow;row<=endrow;row++)
        {
            matrix[row][endcol]=k;
            k++;
        }
        endcol--;
        for(int col=endcol;col>=startcol;col--)
        {
            matrix[endrow][col]=k;
            k++;
        }
        endrow--;
        for(int row=endrow;row>=startrow;row--)
        {
            matrix[row][startcol]=k;
            k++;
        }
        startcol++;
    }  
        if(startrow==endrow)
        matrix[startrow][startrow]=k;
        return matrix;
    }
};