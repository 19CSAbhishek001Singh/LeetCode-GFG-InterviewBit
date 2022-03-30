class Solution {
public:
void setZeroes(vector < vector < int >> & matrix) {
    // without extra space
  int col0 = 1, rows = matrix.size(), cols = matrix[0].size();
  for (int i = 0; i < rows; i++) {
    //checking if 0 is present in the 0th column or not
    if (matrix[i][0] == 0) col0 = 0;
    for (int j = 1; j < cols; j++) {
      if (matrix[i][j] == 0) {
        matrix[i][0] = 0;
        matrix[0][j] = 0;
      }
    }
  }
  //traversing in the reverse direction and
  //checking if the row or col has 0 or not
  //and setting values of matrix accordingly.
  for (int i = rows - 1; i >= 0; i--) {
    for (int j = cols - 1; j >= 1; j--) {
      if (matrix[i][0] == 0 || matrix[0][j] == 0) {
        matrix[i][j] = 0;
      }
    }
    if (col0 == 0) {
      matrix[i][0] = 0;
    }
  }
}
};
/*
      with extra space easy
      
        int n=a.size() ;
		int m=a[0].size() ;
		vector<int>row,col ;
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(a[i][j]==0)
            {
                row.push_back(i) ;
                col.push_back(j) ;
            }
    
    for(auto k:row)
    {
        for(int i=0;i<m;i++)
            a[k][i]=0 ;
    }
    
     for(auto k:col)
    {
        for(int i=0;i<n;i++)
            a[i][k]=0 ;
    }
    }
        */
        