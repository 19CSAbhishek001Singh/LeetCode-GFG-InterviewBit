class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        long long mod=1e9+7;
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(long long it: nums){
            pq.push(it);
        }
        for(long long i=0;i<k;i++){
            long long x=pq.top();
            pq.pop();
            pq.push(x+1);
        }
        long long prod=1;
        for(long long i=0;i<nums.size();i++){
            long long x=pq.top();
            pq.pop();
            prod=(prod*x)%mod;
        }
        return prod;
    }
};