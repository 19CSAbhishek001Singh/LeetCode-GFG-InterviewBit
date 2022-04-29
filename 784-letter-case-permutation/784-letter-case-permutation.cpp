class Solution {
public:
    vector<string> ans;
    vector<string> letterCasePermutation(string s) {
        int n=s.size();
        string curr="";
        solve(s,curr,0);
        return ans;
    }
    void solve(string &s,string curr,int index){
        if(curr.size()==s.size()){
            ans.push_back(curr);
            return ;
        }
        if(s[index]>='0'&&s[index]<='9'){
            solve(s,curr+s[index],index+1);
        }
        else{
            solve(s,curr+(char)toupper(s[index]),index+1);
            solve(s,curr+(char)tolower(s[index]),index+1);
        }
    }
};