class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        vector<int>v(32);
		// go to  nums[i] then go to binary representation o nums[i] check for ith bit set 
		// if set set value of v[i] to 1
        for(int n:nums){
         for(int i=0;i<32;i++){
                if(n&(1<<i))
                    v[i]=1;
            }
        }
        int ans=0;
        for(int i=0;i<32;i++){
            if(v[i]){
               ans+=pow(2,i);
            }
        }
        return ans;
    }
};