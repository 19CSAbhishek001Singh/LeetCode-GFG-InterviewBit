class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        unordered_map<long long,long long> cnt;
        long long res=0;
        long long n=nums.size();
        for(long long i=0;i<n;i++){
            int gcd1=__gcd(nums[i],k);
            int gcd2=k/gcd1;
            //  if gcd itself gets divisible by k
            if(gcd2==1){
                res+=i;
            }
            else{
                for(auto it:cnt){
                    if(it.first%gcd2==0){
                        res+=it.second;
                    }
                }
            }
            cnt[gcd1]++;
        }
        return res;
    }
};