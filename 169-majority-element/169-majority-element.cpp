class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // map<int,int> s;
        // int n=nums.size();
        // for(auto it: nums){
        //     s[it]++;
        // }
        // int ans;
        // for(auto it:s){
        //     if(it.second>n/2){
        //         ans = it.first;
        //     }
        // }
        // return ans;
        
        
//         in linear time and in O(1) space
//         moore voting algo
        
        int count=0,candidate=0;
        for(int num : nums){
            if(count==0) candidate=num;
            if(num==candidate) count++;
            else{
                count--;
            }
        }
        return candidate;
        
    }
};