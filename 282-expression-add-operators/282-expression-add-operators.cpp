class Solution {
public:
    vector<string> ans;
    void dfs(int i, string path, long resSoFar, long prevNum, string &s,int &target){
        if(i==s.size() and resSoFar==target){
            ans.push_back(path);
            return;
        }
        
        string curNumStr = "";
        long curNum=0;
  for(int j=i;j<s.size();++j){
    if(j>i and s[i]=='0') break; //leading zero not allowed
        curNumStr.push_back(s[j]);
        curNum = (curNum*10)+(s[j]-'0');
        if(i==0){
        dfs(j+1, path+curNumStr, curNum, curNum, s, target);
    }
    else{
    dfs(j+1, path+"+"+curNumStr, resSoFar+curNum, curNum, s, target);
    dfs(j+1, path+"-"+curNumStr, resSoFar-curNum, -curNum, s, target);
  dfs(j+1, path+"*"+curNumStr, resSoFar-prevNum+(curNum*prevNum), prevNum*curNum, s, target);
            }
        }
        return;
    }
    
    vector<string> addOperators(string &num, int target) {
        dfs(0,"",0,0,num,target);
        return ans;
    }
};