class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
    vector<long long> ans;
        long long curr=2;
        long long sum=0;
        // final sum is odd
        if(finalSum&1) return ans;
        while(1){
            if(sum+curr==finalSum){
                ans.push_back(curr);
                break;
            }
            if(sum+curr<finalSum){
                ans.push_back(curr);
                sum+=curr;
                curr+=2;
            }
            else{
                long long bk=ans.back();
                ans.pop_back();
                bk+=finalSum-sum;
                ans.push_back(bk);
                break;
            }
        }
        return ans;
    }
};