class Solution {
public:
    int totalFruit(vector<int>& fruits) {
    // simply the problem is to find a maximum size
   // contiguos array of atmost 2 different numbers
        int ans=0,i=0,j=0,n=fruits.size();
        unordered_map<int,int> mp;
        while(j<n){
            mp[fruits[j]]++;
            if (mp.size()>2) {
                while(mp.size()>2) {
                    if(mp[fruits[i]]==1)
                        mp.erase(fruits[i]);
                    else
                        mp[fruits[i]]--;
                    i++;
                }
            }
            if(mp.size()<=2){
            ans=max(ans,j-i+1); j++;
            }
        }
        return ans;
    }
};