// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	vector<string> v;
	void solve(int i, string s, string &f) {
	if (i == s.length()) {
	    if(f==""){
	        return;
	    }
		v.push_back(f);
		return;
	}
	f = f + s[i];
	solve(i + 1, s,  f);
	f.pop_back();
	solve(i + 1, s,  f);
     }
		vector<string> AllPossibleStrings(string s){
		    	string f = "";
		    	solve(0, s, f);
		    	sort(v.begin(),v.end());
		    	return v;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends