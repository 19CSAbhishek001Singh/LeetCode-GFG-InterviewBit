class Solution {
public:
    vector<vector<int>>ans;
    void solve(int i,vector<int>&res,int k,int n){
        if(res.size()==k){
            ans.push_back(res);
            return;
        }
        for(int j=i;j<=n;j++){
            res.push_back(j);
            solve(j+1,res,k,n);
            res.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>res;
        solve(1,res,k,n);
        return ans;
    }
};