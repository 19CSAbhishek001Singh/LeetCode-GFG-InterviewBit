class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
       int n=nums.size(); 
        vector<int>left(n),right(n); 

        left[0]=1; 
        for(int i=1;i<nums.size();i++){ 
            if(nums[i]<=nums[i-1]){ 
                left[i]=left[i-1]+1; 
            }else{ 
                left[i]=1; 
            } 
        } 
        
        right[n-1] = 1; 
        for(int i=nums.size()-2;i>=0;i--){ 
            if(nums[i]<=nums[i+1]){ 
                right[i]=right[i+1]+1; 
            }else{ 
                right[i]=1; 
            } 
        } 
        
        vector<int>ans; 
        for(int i=1;i<nums.size()-1;i++){ 
            if(right[i+1]>=k && left[i-1]>=k){ 
                ans.push_back(i); 
            } 
        } 
        return ans; 
    }
};