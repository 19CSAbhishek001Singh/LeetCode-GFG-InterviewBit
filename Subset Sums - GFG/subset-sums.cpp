// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
void findSum(int ind,int sum,vector<int>&arr,int N,vector<int>&subsets){
    if(ind==arr.size()){
        subsets.push_back(sum);
        return;
    }
    sum+=arr[ind];
    findSum(ind+1,sum,arr,N,subsets);
    sum-=arr[ind];
    findSum(ind+1,sum,arr,N,subsets);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> subsets;
        findSum(0,0,arr,N,subsets);
        sort(subsets.begin(),subsets.end());
        return subsets;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends