class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& a) {
    vector<vector<int>> ans;
     sort(a.begin(),a.end());
        ans.push_back(a);
    do{
        if(a!=ans.back()){
     ans.push_back(a);
        }
    }
     while(next_permutation(a.begin(),a.end()));
       return ans;
    }
};