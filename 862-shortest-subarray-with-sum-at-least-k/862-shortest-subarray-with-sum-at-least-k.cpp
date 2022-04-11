class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
    int n=nums.size();
        deque<pair<long long,long long>>dq;
        long long sum=0;
        long long shortest=INT_MAX;
        for(long long i=0;i<n;i++){
            sum+=nums[i];
            if(sum>=k) shortest=min(shortest,i+1);
            // reduce the window
            pair<long long,long long> curr={INT_MIN,INT_MIN};
            // sum>=k try to reduce from the front side
            while(!dq.empty()&& (sum-dq.front().first>=k)){
                curr=dq.front();
                dq.pop_front();
            }
            if(curr.second!=INT_MIN){
                shortest=min(shortest,(i-curr.second));
            }
            // if current sum less than the last sum pop 
            // untill it becomes greater
            while(!dq.empty() && sum<=dq.back().first){
                dq.pop_back();
            }
            // store current sum with index
            dq.push_back({sum,i});
        }
        return shortest==INT_MAX?-1:shortest;
    }
};