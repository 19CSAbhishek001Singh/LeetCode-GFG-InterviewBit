// { Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    void rearrange(long long *arr, int n) {
   	// stack<int>st;
    // 	queue<int>qu;
    // 	for(int i=0; i<n/2; i++){
    // 	    qu.push(arr[i]);
    // 	}
    // 	for(int i=n/2; i<n; i++){
    // 	    st.push(arr[i]);
    // 	}
    // 	for(int i=0; i<n; i++){
    // 	    if(i%2==0){
    // 	        arr[i]=st.top();
    // 	        st.pop();
    // 	    }
    // 	    else{
    // 	        arr[i]=qu.front();
    // 	        qu.pop();
    // 	    }
    // 	}
    
    
    vector<long long> ans(n);
     long long j=n-1;
    	for(long long i=0;i<n;i=i+2)
    	{
    	    ans[i] = arr[j];
    	    j--;
    	}
    	j = 0;
    	for(long long i=1;i<n;i=i+2)
    	{
    	    ans[i] = arr[j];
    	    j++;
    	}
    	for(long long i=0;i<n;i++)
    	{
    	    arr[i] = ans[i];
    	}
    }
};

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  // } Driver Code Ends