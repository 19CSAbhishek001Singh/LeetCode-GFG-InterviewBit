class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
      unordered_map<int,int> mp;
        for(auto x:tasks){
            mp[x]++;
        }
        int ans=0;
        for(auto x:mp){
            if((x.second/3.0)>=1){
                ans+=(ceil((x.second/3.0)));
            }
            else if((x.second/2.0)>=1){
                ans+=(ceil((x.second/2.0)));
            }
            else {
                return -1;
            }
           /*   or
           if(x.second==1) return -1;
           int count=0;
           while(it.second>3)
           it.second-=3,cnt++;
           
           if(it.second) cnt++;
           ans+=count;
           */
        }
        return ans;
    }
};