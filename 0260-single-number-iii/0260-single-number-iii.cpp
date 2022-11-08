class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
 long long wholexor=0;
        for(auto val:nums){
            wholexor=wholexor^val;
        }
        
       long long rbsm = wholexor & (~wholexor +1);
        int x=0,y=0;
        
        for(auto val:nums){
            if((val&rbsm)==0){    
                x=x^val;
            }
            else{               //
                y=y^val;
            }
        }
        
        return {x,y};
    }
};