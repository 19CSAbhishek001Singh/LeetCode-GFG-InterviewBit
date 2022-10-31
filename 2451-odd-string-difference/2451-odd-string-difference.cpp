class Solution {
public:
    string oddString(vector<string>& words) {
        map<vector<int>,vector<string>> mp;
        for(auto word:words){
             vector<int> arr;
            for(int i=1;i<words[0].size();i++){
                arr.push_back((int)word[i]-(int)word[i-1]);
            }
            mp[arr].push_back(word);
        }
        
        for(auto it:mp){
            if(it.second.size()==1) return it.second[0];
        }
        return "";
    }
};