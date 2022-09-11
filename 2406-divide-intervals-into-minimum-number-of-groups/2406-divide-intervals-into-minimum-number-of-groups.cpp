class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        long long int timeLine[1000005] = {0};
        for(vector<int> &i: intervals){
            int startTime = i[0];
            int endTime = i[1];
            timeLine[startTime]+=1;
            timeLine[endTime + 1]-=1;
        }
        long long int ans = 0, prefixSum = 0;
        for(int i=0;i<1000005;++i){
           //maximum no. of overlapping intervals at that particular time
             prefixSum+=timeLine[i]; 
            ans = max(ans, prefixSum);
        }
        return ans;
    }
};
