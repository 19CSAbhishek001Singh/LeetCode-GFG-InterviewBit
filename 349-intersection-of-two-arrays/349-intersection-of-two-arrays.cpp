class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        vector<int> v;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int n=a.size();
        int m=b.size();
       int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] > b[j]) {
            j++;
        }
        else if (b[j] > a[i]) {
            i++;
        }
        else {
           v.push_back(a[i]);
            i++;
            j++;
        }
    }
        set<int> s;
        vector<int>ans;
        for(auto x: v){
            s.insert(x);
        }
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};