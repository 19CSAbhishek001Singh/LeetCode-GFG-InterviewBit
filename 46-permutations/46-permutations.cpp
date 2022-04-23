class Solution {
public:
     void recurPermute(int index, vector < int > & nums, vector < vector < int >> & ans) {
      if (index == nums.size()) {
        ans.push_back(nums);
        return;
      }
      for (int i = index; i < nums.size(); i++) {
        swap(nums[index], nums[i]);
        recurPermute(index + 1, nums, ans);
        swap(nums[index], nums[i]);
      }
    }
    vector<vector<int>> permute(vector<int>& a) {
     vector < vector < int >> ans;
      recurPermute(0, a, ans);
      return ans;
    }
};
    /*
    vector<vector<int>> ans;
     sort(a.begin(),a.end());
    do{
     ans.push_back(a);
    }
     while(next_permutation(a.begin(),a.end()));
       return ans;  
    }
    */
