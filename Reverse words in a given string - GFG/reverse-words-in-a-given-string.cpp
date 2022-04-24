// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
      
        int n=s.size();
        string a="";
        int j=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='.'){
                j=i+1;
                while(j<n &&s[j]!='.'){
                    a+=s[j++];
                }
                a+='.';
            }
            else if(i==0){
                j=i;
                while(j<n &&s[j]!='.'){
                    a+=s[j++];
                }
            }
        }
        return a;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends