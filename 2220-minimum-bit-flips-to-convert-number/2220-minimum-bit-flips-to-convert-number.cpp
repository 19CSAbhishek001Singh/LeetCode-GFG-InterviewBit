class Solution {
public:
    int minBitFlips(int start, int goal) {
    bitset<32> b(start);
    bitset<32> b1(goal);
    int count=0;
    for(int i=0;i<32;i++){
    if(b[i]!=b1[i]) count++;
    }
    return count;
    }
    
    //   return __builtin_popcount(start^goal);

};