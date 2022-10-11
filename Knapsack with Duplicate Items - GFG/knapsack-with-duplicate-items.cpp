//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int rec(int ind,int w,int weight[],int profit[],
       vector<vector<int>>&dp){
    if(ind==0){
        return ((int)(w/weight[ind]))*profit[ind];
    }
    if(dp[ind][w]!=-1) return dp[ind][w];
    int notake=rec(ind-1,w,weight,profit,dp);
    int take=INT_MIN;
    if(weight[ind]<=w){
        take=profit[ind]+rec(ind,w-weight[ind],weight,profit,dp);
    }
    return dp[ind][w]=max(take,notake);
}
    int knapSack(int n, int w, int profit[], int weight[])
    {
            vector<vector<int>> dp(n+1,vector<int>(w+1,-1));
            return rec(n-1,w,weight,profit,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends