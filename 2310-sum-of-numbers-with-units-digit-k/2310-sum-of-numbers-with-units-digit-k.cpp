class Solution {
public:
    int minimumNumbers(int num, int k) {
        for(int i=0; i<=3000; i++) {
            int temp = num - k*i;
            if(temp<0)
                break;
            if(temp==0)
                return i;
            if(temp%10 == k)
                return i+1;
        }
        return -1;
    }
};