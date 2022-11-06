class Solution {
public:
    string orderlyQueue(string s, int k) {
  /* for k>1 we can make it fully sorted string after roation because here we are not bound to the roatate first char only.*/
        if (k > 1) {
            sort(s.begin(), s.end());
            return s;
        }
        /* for k==1 we can rotate whole string any times like-  S="cba" we can get cba, bac,acb so in S+S ="cbacba" we need to find only lexicographically smallest string  of size n in S+S.*/
            string temp=s;
            s= s + s;
            for(int i=1;i<temp.size();i++){
                temp=min(temp,s.substr(i,temp.size()));
            }
            return temp;
    }
};