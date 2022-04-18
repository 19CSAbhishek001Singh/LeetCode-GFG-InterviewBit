class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            string temp;
            for(int i=0;i<s.size();i++){
                int curr=0;
                for(int j=i;j<i+k && j<s.size();j++){
                    curr+=(s[j]-'0');
                }
                i=i+k-1;
                temp+=to_string(curr);
        }
         s=temp;
        }
        return s;
    }
};