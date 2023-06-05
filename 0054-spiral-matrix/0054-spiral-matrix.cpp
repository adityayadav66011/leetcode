class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0, bottom = m - 1, left = 0, right = n - 1;
        while(top <= bottom && left <= right) {
            // Traverse right
            for(int i = left; i <= right; i++) {
                result.push_back(matrix[top][i]);
            }
            top++;
            // Traverse down
            for(int i = top; i <= bottom; i++) {
                result.push_back(matrix[i][right]);
            }
            right--;
            // Traverse left
            if(top <= bottom) {
                for(int i = right; i >= left; i--) {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            // Traverse up
            if(left <= right) {
                for(int i = bottom; i >= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
    }
};