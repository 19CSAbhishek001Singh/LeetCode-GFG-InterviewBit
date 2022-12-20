//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int nums[], int n) 
    { 
    int mx1 = INT_MIN, mn1 = INT_MAX, mx2 = INT_MIN, mn2 = INT_MAX;
    for(int i = 0; i < n; ++i){
        // for eq 1
        mx1 = max(mx1, nums[i]+i);
        mn1 = min(mn1, nums[i]+i);
        
        // for eq2
        mx2 = max(mx2, nums[i]-i);
        mn2 = min(mn2, nums[i]-i);
    }
    int ans1 = mx1 - mn1;
    int ans2 = mx2 - mn2;
    return max(ans1, ans2);
    } 
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends