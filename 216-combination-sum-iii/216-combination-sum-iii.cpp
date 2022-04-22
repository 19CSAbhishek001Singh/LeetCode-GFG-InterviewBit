class Solution {
public:
    void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds,int k) {
      if (ind == arr.size()) {
        if (target == 0 && k==0) {
          ans.push_back(ds);
        }
        return;
      }
      // pick up the element 
      if (arr[ind] <= target) {
        ds.push_back(arr[ind]);
        findCombination(ind+1, target - arr[ind], arr, ans, ds,k-1);
        ds.pop_back();
      }

      findCombination(ind + 1, target, arr, ans, ds,k);

    }
    vector<vector<int>> combinationSum3(int k, int n) {
      vector < vector < int >> ans;
      vector < int > ds;
        vector<int> candidates={1,2,3,4,5,6,7,8,9};
      findCombination(0, n, candidates, ans, ds,k);
      return ans;
    }
};