// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &arr, int n, int m, int key){
         if(key < arr[0][0] or key>arr[n-1][m-1]){
        return 0;
    }
    int i=0;
    int j = m-1;
    while(i<=n-1 and j>=0){
        if(arr[i][j]==key){
            return 1;
        }
        else if(arr[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
    return 0;
	}
};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}  // } Driver Code Ends