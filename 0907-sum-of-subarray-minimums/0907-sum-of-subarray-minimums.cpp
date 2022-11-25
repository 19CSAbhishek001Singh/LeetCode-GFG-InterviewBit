class Solution {
public:
    int mod =1e9+7;
        vector<long long> nextSmaller(vector<int>&arr){
        int n=(int)arr.size();
        vector<long long> nse(n);
        for(int i=n-1;i>=0;i--){
            nse[i]=i+1;
            while(nse[i]!=n && arr[i]<arr[nse[i]]){
                nse[i]=nse[nse[i]];
            }
        }
        return nse;
    }
    vector<long long> prevSmaller(vector<int> &arr){
        int n=arr.size();
         vector<long long> pse(n);
        for(int i=0;i<n;i++){
            pse[i]=i-1;
            while(pse[i]!=-1&&arr[i]<=arr[pse[i]]){
                pse[i]=pse[pse[i]];
            }
        }
         return pse;
    }
    int sumSubarrayMins(vector<int>& arr) {
        long long ans=0;
         vector<long long>next_sm=nextSmaller(arr);
        auto prev_sm=prevSmaller(arr);
        for(int i=0;i<(int)arr.size();i++){
            ans+=(arr[i]*((i-prev_sm[i])*(next_sm[i]-i)));
        }
         return ans%mod;
    }
};