class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string res="";
        solve(0,n,res,ans);
        return ans;
    }
    void solve(int score,int n,string res,vector<string>& ans){
        if(score<0)
            return;
        if((int)res.size()>2*n)
            return;
        if(score==0 && (int) res.size()==(2*n))
            ans.push_back(res);
        solve(score+1,n,res+"(",ans);
        solve(score-1,n,res+")",ans);
        return;
    }
};