class Solution {
    public:
        bool check(string &x, vector<string> &dict) {
            for (auto it: dict) {
                int c = 0;
                for (int i = 0; i < it.size(); ++i) {
                    if (x[i] != it[i]) c++;
                }
                if (c <= 2) return true;
            }
            return false;
        }
    
    vector<string> twoEditWords(vector<string> &queries, vector<string> &dict) {
        vector<string> ans;
        for (auto x: queries) {
            if (check(x, dict)) 
                ans.push_back(x);
        }
        return ans;
    }
};