//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        long long xor1=0;
        for(auto val:nums){
            xor1=xor1^val;
        }
        
       long long rbsm = xor1 & (~(xor1-1));
        int x=0,y=0;
        
        for(auto val:nums){
            if((val&rbsm)==0){    
                x=x^val;
            }
            else{              
                y=y^val;
            }
        }
        vector<int> v={x,y};
        sort(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends