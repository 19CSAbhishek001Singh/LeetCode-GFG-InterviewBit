// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int height[], int n){
        // code here
        
        // O(1) space
        long long left=0,right=n-1;
        long long res=0;
        long long maxleft=0,maxright=0;
        while(left<=right){
            
            if(height[left]<=height[right]){
                
            if(height[left]>=maxleft) maxleft=height[left];
            else res+=maxleft-height[left];
            left++;
            }
            else{
                  if(height[right]>=maxright) maxright=height[right];
                    else res+=maxright-height[right];
                 right--;
            }
        }
        return res;
        
        
        
        
//     int sum=0,max_left =0,max_right =0;
//     for(int i=1;i<n;i++){
//     max_left =*max_element(arr ,arr+i);
//     max_right= *max_element(arr+i,arr+n);
//     int ans = min(max_left,max_right)-arr[i];
//      if(ans<1){
//       ans =0 ; 
//   }
//   sum= sum+ans;
//   }
//     return sum;


    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends