class Solution {
public:
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        sort(nums.begin(),nums.end());
        sort(target.begin(),target.end());
        
        vector<int> even, evenTarget;
        vector<int> odd, oddTarget;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
            
            if(target[i]%2==0){
                evenTarget.push_back(target[i]);
            }
            else{
                oddTarget.push_back(target[i]);
            }
        }
        
        long long count=0;
        for(int i=0;i<even.size();i++){
            count+=abs((long long)even[i]-(long long)evenTarget[i])/2;
        }
        for(int i=0;i<odd.size();i++){
            count+=abs((long long)odd[i]-(long long)oddTarget[i])/2;
        }
        
        return count/2;
        
    }
};