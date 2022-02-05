class Solution {
public:
    int minimumSum(int num) {
     string s=to_string(num);
        sort(s.begin(),s.end());
        swap(s[1],s[2]);
       string s1=s.substr(0,2);
        string s2=s.substr(2,4);
        int x=stoi(s1);
        int y=stoi(s2);
        //cout<<x<<" "<<y;
        return x+y;
    }
};