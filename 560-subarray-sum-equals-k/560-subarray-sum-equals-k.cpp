class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // if(nums.size()==0){
        //     return 0;
        // }
        // unordered_map<int,int> um;
        // int sum=0;
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     sum+=nums[i];
        //     if(sum==k){
        //         count+=1;
        //     }
        //     if(um.find(sum-k)!=um.end()){
        //             count+=um[sum-k];
        //         }
        //     um[sum]+=1;
        //     i++;
        // }
        // return count;
        
        
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