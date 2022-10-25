//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
        int flag=0;
        void allsubset(int ind,vector<int>&nums,int &sum,int m)
        {
            if(ind==nums.size())
            {
                if(sum%m==0 && sum!=0 )
                {
                   
                   flag=1;
                }
                return ;
            }
            sum+=nums[ind];
            allsubset(ind+1,nums,sum,m);
            sum-=nums[ind];
            allsubset(ind+1,nums,sum,m);
        }
		int DivisibleByM(vector<int>nums, int m){
		    int sum =0;
		    allsubset(0,nums,sum,m);
		    return flag;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans  = ob.DivisibleByM(nums, m);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends