//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> arr, int k) {
         map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            m[((arr[i]%k)+k)%k]++;
        }
        for(auto it = m.begin();it!=m.end();it++)
        {
            if(it->first == 0)
            {
                if(it->second % 2 != 0)       // remainder is 0
                    return false;     
            }
            else if(it->second != m[k - it->first])
                return false;
            
            
            else if(m.find(k-it->first) == m.end())
                return false;
        }
        return true;
    }  
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends