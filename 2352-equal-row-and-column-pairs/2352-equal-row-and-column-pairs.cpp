class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        multiset<vector<int>> row;
        multiset<vector<int>> col;
        vector<int> v;
        
        for(int i=0;i<grid.size();i++){
         row.insert(grid[i]);
        }
        
       for(int i=0;i<grid.size();i++){
           for(int j=0;j<grid[0].size();j++){
               v.push_back(grid[j][i]);
           }
           col.insert(v);
           v.clear();
       }

        int cnt=0;
        for(auto x:row){
            if(col.find(x)!=col.end()){
                cnt+=col.count(x);
            }
        }
        return cnt;
    }
};