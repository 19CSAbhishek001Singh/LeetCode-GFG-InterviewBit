class Solution {
public:
    string greatestLetter(string s) {
       sort(s.begin(),s.end());
        string ans="";
        for(int i=0;i<s.size();i++){
            if(islower(s[i])) break;
            if(isupper(s[i])){
                char x=tolower(s[i]);
                if(s.find(x)!=string::npos){
                    ans=s[i];
                }
            }
        }
        return ans;
    }
};