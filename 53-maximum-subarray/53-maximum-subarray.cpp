class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        if(arr.size()<0) return 0;
         int curr=arr[0];
        int res=arr[0];
        int n=arr.size();
        for(int i=1;i<n;i++){
            if(curr<0){
                curr=0;
            }
            curr=curr+arr[i];
            if(curr>res){
                res=curr;
            }
        }
        return res;
    }
};