class Solution {
public:
    bool isPowerOfThree(int n) {
        
    // 1162261467 is 3^19,  3^20 is bigger than int  
   // return ( n>0 &&  1162261467%n==0);
        
    if(n==0) return false;    
    if(ceil(log10(n) / log10(3))==floor(log10(n) / log10(3))){
         return true;
     }
     return false;
    }
};