class Solution {
public:
    string unique(string s){
    string str;
    int len = s.length();
    for(int i = 0; i < len; i++){
        char c = s[i];
        if(c==' ') continue;
        auto found = str.find(c);
        if (found == string::npos){
            str += c;
        }
    }
    return str;
}
    string decodeMessage(string key, string msg) {
        string ans="";
        string alpha="abcdefghijklmnopqrstuvwxyz";
        string key1=unique(key);
        unordered_map<char,char> ump;
        for(int i=0;i<key1.length();i++){
            ump.insert({key1[i],alpha[i]});
        }
        for(int i=0;i<msg.length();i++){
            if(msg[i]==' ') {
                ans+=' '; 
                continue;
            }
            ans+=ump[msg[i]];
        }
        return ans;
           
    }
};