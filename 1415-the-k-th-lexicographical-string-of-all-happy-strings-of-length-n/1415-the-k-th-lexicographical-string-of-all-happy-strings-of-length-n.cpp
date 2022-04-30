class Solution {
public:
    void backtrack(vector<string> &ans,string s,vector<char> v,int n,char prevchar){
        if(n==0) {
            ans.push_back(s);
            return;
        }
        for(int i=0;i<v.size();++i){
            if(prevchar!=v[i]){
                s.push_back(v[i]);
                backtrack(ans,s,v,n-1,v[i]);
                s.pop_back();
 
            }
        }
    } 
    string getHappyString(int n, int k) {
            string s="";
            vector<string> ans;
            vector<char> v{'a','b','c'};
            char prevchar=' ';
            backtrack(ans,s,v,n,prevchar);
 
            return k>ans.size()?"":ans[k-1];
 
    }
};