class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int s=matrix.size();
        vector<int> v1;
        for(int col=0;col<s;col++){
            for(int row=s-1;row>=0;row--){
                v1.push_back(matrix[row][col]);
            }
        }
        int i=0;  
        for(int row=0;row<s;row++){
         for(int col=0;col<s;col++){
               matrix[row][col]= v1[i];
               i++;
            }
        }
    }
};