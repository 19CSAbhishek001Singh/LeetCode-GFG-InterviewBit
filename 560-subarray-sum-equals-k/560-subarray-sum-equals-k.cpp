class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int n=nums.size(); 
        // int currSum = 0  ; 
        // unordered_map<int,int>mp ; 
        // int res = 0 ;  
        // for(int i=0; i<n; ++i){   
        //     currSum+=nums[i]  ;                   
        //     if(currSum==k)
        //     res++ ;                        
        //     if(mp.find(currSum-k) != mp.end()){
        //         res+=mp[currSum-k]  ;   
        //             }
        //      mp[currSum]++ ;
        //     }   
        //     return res ; 
        
        
//         or
        
      multiset<int> s;
      int result = 0;  
      int sum = 0;  
      s.emplace(sum);
      for(int n: nums) {
        sum += n;
        result += s.count(sum - k);  
        s.emplace(sum);  
      }
      return result;  
    }
};