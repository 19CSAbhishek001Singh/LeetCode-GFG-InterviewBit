//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
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
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>>ans=image;
        int iniColor=image[sr][sc];
        dfs(sr,sc,ans,image, newColor,iniColor);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends