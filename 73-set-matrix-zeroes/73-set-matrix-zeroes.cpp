class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
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
};