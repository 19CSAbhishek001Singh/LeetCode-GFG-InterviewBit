class Solution {
public:
    int prefixCount(vector<string>& s, string pref) {
        int n=s.size();
        int m=pref.size();
        int count=0;
        for(int i=0;i<n;i++){
            string ans=s[i];
            if(ans.size()<m){
                continue;
            }
            if(ans.substr(0,m)==pref){
                count++;
            }
        }
        return count;
    }
};



//         int ans=0;
//         for(auto & word:words)
//             if(word.find(pref)==0)
//                 ans++;
//         return ans;