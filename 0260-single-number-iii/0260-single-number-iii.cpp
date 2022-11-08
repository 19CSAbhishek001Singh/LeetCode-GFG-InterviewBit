class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xor1=0;
        for(auto val:nums){
            xor1=xor1^val;
        }
        
       long long rbsm = xor1 & (~(xor1-1));
        int x=0,y=0;
        
        for(auto val:nums){
            if((val&rbsm)==0){    
                x=x^val;
            }
            else{              
                y=y^val;
            }
        }
        
        return {x,y};
    }
};