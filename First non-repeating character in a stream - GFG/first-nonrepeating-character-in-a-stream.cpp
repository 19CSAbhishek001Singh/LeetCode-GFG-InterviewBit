// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string s){
		    queue<char> q;
		    int freq[26]={0};
		    string ans="";
		    for(int i=0;i<s.length();i++){
		        q.push(s[i]);
		        freq[s[i]-97]++;
		        
		        while(q.size()!=0&&freq[q.front()-97]!=1)
		         q.pop();
		        if(q.size()!=0)
		         ans.push_back(q.front());
		        else 
		        ans.push_back('#');
		    }
		    return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends