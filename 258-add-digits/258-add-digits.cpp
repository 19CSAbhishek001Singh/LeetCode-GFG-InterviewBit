class Solution {
public:
    int addDigits(int num) {
        
        // digital root of no
        return 1+(num-1)%9;
    }
};