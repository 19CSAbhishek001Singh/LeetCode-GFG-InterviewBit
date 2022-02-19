class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long res=num/3;
        vector<long long> v;
        v.push_back(res);
        v.push_back(res+1);
        v.push_back(res-1);
        if((int)v.size()<3){
            v.clear();
            return v;
        }
        else{
            long long sum=0;
            sort(v.begin(),v.end());
            for(long long x:v) sum+=x;
            if(sum==num) return v;
            else{
                v.clear();
                return v;
            }
        }
    }
};