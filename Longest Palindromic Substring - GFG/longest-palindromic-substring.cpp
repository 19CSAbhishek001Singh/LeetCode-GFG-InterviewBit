//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int isPal(string &s, int i, int j,vector<vector<int>>&dp)
    {
        if (i >= j) return 1;
        if (dp[i][j] != -1) return dp[i][j];
        if (s[i] != s[j])
            return dp[i][j] = 0;
        return dp[i][j] = isPal(s, i + 1, j - 1,dp);
    }
    string longestPalindrome(string s){
         string res="";
         res+=s[0];
        if(s.size()==1) return s;
        int maxi=0;
        vector<vector<int>>dp(s.size()+1,vector<int>(s.size()+1,-1));
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = i; j < s.length(); j++)
            {
                if (isPal(s, i, j,dp)){
                    if(abs(i-j)>maxi){
                        maxi=max(maxi,abs(i-j));
                        res=s.substr(i,j-i+1);
                    }
                }
            }
        }
        return res;
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends