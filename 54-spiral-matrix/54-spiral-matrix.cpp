class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ret;
        int n = matrix.size(),
        m = matrix[0].size(), 
        target = 0, top = 0, 
        down = n-1,
        left = 0, 
        right = m-1;
	    while (top <= down and left <= right){
            if (target == 0){
                for (int i = left; i<=right; i++){
                    ret.push_back(matrix[top][i]);
                }
                top++;
            }
            else if (target == 1){
                for (int i = top; i<=down; i++){
                    ret.push_back(matrix[i][right]);
                }
                right--;
            }
            else if (target == 2){
                for (int i = right; i>=left; i--){
                    ret.push_back(matrix[down][i]);
                }
                down--;
            }
            else if (target == 3){
                for (int i = down; i>=top; i--){
                    ret.push_back(matrix[i][left]);
                }
                left++;
            }
            target = (target+1)%4;
        }
        return ret;
    }
};