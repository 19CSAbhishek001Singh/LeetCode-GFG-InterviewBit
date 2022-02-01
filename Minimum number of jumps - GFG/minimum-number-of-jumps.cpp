// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int nums[], int n){
        // Your code her
         int maxr=0, curreach=0, jump=0;   
         for (int i=0; i< n-1; i++){           
               maxr= max(maxr, i+nums[i]); 
               if (i == curreach){
                  curreach= maxr;
                     jump ++;                     
               }    
               if(curreach<i) return -1;
         }
        if(curreach<n-1) return -1;

           return jump;
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends