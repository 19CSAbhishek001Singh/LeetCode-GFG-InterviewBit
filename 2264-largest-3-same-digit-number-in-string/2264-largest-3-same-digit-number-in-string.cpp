class Solution {
public:
    string largestGoodInteger(string num) {
        int count=1;
        string maxi="";
        string curr="";
        for(int i=0;i<num.size()-1;i++){
            if(num[i]==num[i+1]){
                curr+=(num[i]);
                count++;
            }
            else{
                count=1;
                curr="";
            }
            
            if(count==3){
                curr+=num[i+1];
                maxi=max(maxi,curr);
            }
        }
        return maxi;
    }
};