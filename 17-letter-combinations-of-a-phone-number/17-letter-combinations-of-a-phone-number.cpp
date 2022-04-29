class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output; 
string mapping[10]={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if(digits.length() == 0)
            return ans;
        solve(digits, output, 0, ans, mapping);
        return ans;
    }
void solve(string digit, string output, int index, vector<string>& ans, string mapping[] ) {
        if(index >= digit.length()) {
            ans.push_back(output);
            return;
        }
        int number = digit[index] - '0';
        string value = mapping[number];

        for(int i=0; i<value.length(); i++) {
            output.push_back(value[i]);
            solve(digit, output, index+1, ans, mapping);
            output.pop_back();
        }
    }
};