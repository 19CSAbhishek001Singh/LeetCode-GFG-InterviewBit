class Solution {
public:
//     when n*m
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
		int m = matrix.size();
		int n = matrix[0].size();
		vector<vector<int>> mat1(n, vector<int>(m,0));
		for(int i=0; i<n; i++){
			for(int j=0;j<m; j++){
				mat1[i][j] = matrix[j][i];
			}
		}
		return mat1;
	}
};
/*
when n*n exactly like 3*3 etc
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int n=matrix.size();
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<i;j++)
         swap(matrix[i][j],matrix[j][i]);
     }
        return matrix;
    }
    */