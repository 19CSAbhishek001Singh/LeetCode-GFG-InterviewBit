class Solution {
public:
     void dfs(int row,int col,vector<vector<int>>&ans,vector<vector<int>>&image,int newColor,int ini){
        ans[row][col]=newColor;
        int delRow[]={-1,0,1,0};
        int delCol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=row+delRow[i];
            int ncol=col+delCol[i];
            if(nrow>=0 && nrow<image.size() && ncol>=0 && ncol<image[0].size()
            && image[nrow][ncol]==ini && ans[nrow][ncol]!=newColor
            ){
                dfs(nrow,ncol,ans,image,newColor,ini);
            }
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
         vector<vector<int>>ans=image;
        int iniColor=image[sr][sc];
        dfs(sr,sc,ans,image, color,iniColor);
        return ans;
    }
};