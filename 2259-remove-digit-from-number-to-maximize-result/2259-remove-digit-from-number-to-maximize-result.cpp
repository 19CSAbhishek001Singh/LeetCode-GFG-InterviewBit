class Solution {
public:
    string removeDigit(string number, char digit) {
        string maxi="";
        for(int i=0;i<number.size();i++){
            string left="";
            string right="";
            if(number[i]==digit){
            left=number.substr(0,i);
           if(i!=number.size()-1){
            right=number.substr(i+1);
           }
            string join=left+right;
            maxi=max(maxi,join);
            }
        }
        return maxi;
    }
};