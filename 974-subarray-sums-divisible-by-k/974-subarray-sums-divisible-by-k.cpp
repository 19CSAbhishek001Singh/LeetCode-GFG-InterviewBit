class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
     int count =0;
        int sum=0;
        map<int,int> um;
        um[0]=1;
        int n=nums.size();
        int i=0;
        while(i<n){
            sum+=nums[i++];
            int rem=sum%k;
            if(rem<0)
                rem+=k;
            if(um.find(rem)!=um.end()){
                count+=um[rem];
            }
                um[rem]++;
            
        }
        return count;
    }
};