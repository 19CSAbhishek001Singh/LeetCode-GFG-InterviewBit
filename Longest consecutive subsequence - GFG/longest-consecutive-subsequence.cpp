// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      vector<int> ar;
      for(int i=0;i<N;i++) ar.push_back(arr[i]);
      set<int> s;
      for(int x:ar){
          s.insert(x);
      }
      int longestStreak=0;
      for(int nums:ar){
          if(!s.count(nums-1)){
              int currNumber=nums;
              int currStreak=1;
              while(s.count(currNumber+1)){
                  currNumber+=1;
                  currStreak+=1;
              }
              longestStreak=max(longestStreak,currStreak);
          }
      }
      return longestStreak;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends