class Solution {
public:
     int destroyTargets(vector<int>& A, int space) {
         int res = 1e9, maxi = 0;
         
         unordered_map<int, int> count;
         
         for (auto it : A)
             maxi = max(maxi, ++count[it % space]);
         
         for (auto it : A)
             if (count[it % space] == maxi)
                 res = min(res, it);
         return res;
    }
};