class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;
        int row= matrix.size();
        int col= matrix[0].size();
        int count = 0;
        while (count < (row * col)) {
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[top][j]);
                count++;
            }
            top++;
            for (int i = top; i <= bottom && count < (row * col); i++) {
                ans.push_back(matrix[i][right]);
                count++;
            }
            right--;
            for (int j = right; j >= left && count < (row * col); j--) {
                ans.push_back(matrix[bottom][j]);
                count++;
            }
            bottom--;
            for (int i = bottom; i >= top && count < (row * col); i--) {
                ans.push_back(matrix[i][left]);
                count++;
            }
            left++;
        }
        return ans;
    }
};