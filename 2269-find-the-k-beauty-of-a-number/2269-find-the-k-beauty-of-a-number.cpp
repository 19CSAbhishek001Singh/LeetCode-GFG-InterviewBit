class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string num1=to_string(num);
        int count=0;
        for(int i=0;i<=num1.length()-k;i++){
            int x=stoi(num1.substr(i,k));
            if(x!=0&&num%x==0){
                    count++;
                }
            }
        return count;
    }
};