class Solution {
public:
    
    string getPermutation(int n, int k) {
     int fact=1;
        vector<int> numbers;
        for(int i=1;i<n;i++){
            fact = fact*i;
            numbers.push_back(i);
        }
        numbers.push_back(n);
        string ans="";
        k=k-1;
        while(true){
            ans+=to_string(numbers[k/fact]);
            numbers.erase(numbers.begin()+k/fact);
            if(numbers.size()==0){
                break;
            }
            k=k%fact;
            fact=fact/numbers.size();
        }
        return ans;
    }
};
         /*
        string ans;
        for(int i=1;i<=n;i++){
            ans+=(i+'0');
        }
        for(int i=0;i<k-1;i++){
            next_permutation(ans.begin(),ans.end());
        }
        return ans;
        */