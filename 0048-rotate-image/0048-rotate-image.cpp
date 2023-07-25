class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int top = 0;
        int bottom = n-1;
        
        while(top < bottom){
            for(int i = 0; i < (bottom - top); ++i){
                swap(matrix[top][top+i], matrix[top+i][bottom]);
                swap(matrix[top][top+i], matrix[bottom][bottom - i]);
                swap(matrix[top][top+i], matrix[bottom - i][top]);
            }
            ++top;
            --bottom;
        }
    }
};