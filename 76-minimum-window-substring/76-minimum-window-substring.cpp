class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mpp;
        for(int i=0;i<t.length();i++){
            mpp[t[i]]++;
        }
        int ans=INT_MAX;
        string result;
        int startIdx=0;
        int i=0,j=0;
        int count=mpp.size();
        while(j<s.length()){
            if(mpp.find(s[j])!=mpp.end()){
                mpp[s[j]]--;
                if(mpp[s[j]]==0){
                    count--;
                }   
            }
            if(count>0) j++;
            else if(count==0){
                if(j-i+1<ans){
                     ans=min(j-i+1,ans);
                     startIdx = i;
                     result = s.substr(startIdx,ans);
                }
                while(count==0){
                    if(mpp.find(s[i])==mpp.end()){
                        i++;
                         if(j-i+1<ans){
                            ans=min(j-i+1,ans);
                            startIdx = i;
                            result = s.substr(startIdx,ans);
                }
                    } 
                        else{
                             mpp[s[i]]++;
                             if(mpp[s[i]]>0){
                             i++;
                             count++;
                        }
                    else{
                        i++;
                        if(j-i+1<ans){
                           ans=min(j-i+1,ans);
                           startIdx = i;
                           result = s.substr(startIdx,ans);
                         }
                    }
                }
                
            }
            j++;
        }
        }
        return(ans==INT_MAX?"":result);
    }
};