// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& strs) {
        //code here
               unordered_map<string,vector<string> > mymap;
        int n = strs.size();
        string temp;
        for(int i =0;i<n;++i){
            temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mymap[strs[i]].push_back(temp);
        }
        vector<vector<string> > result;
        for(auto itr=mymap.begin();itr!=mymap.end();++itr)
            result.push_back(itr->second);
        
        sort(result.begin(),result.end());
        return result;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends