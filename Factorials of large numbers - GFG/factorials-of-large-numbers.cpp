// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:

// do it again km aaya
 vector<int> factorial(int N){
      vector<int> fac={1};
        for(int i=2;i<=N;i++)
        {
            int c=0;
            for(int j=0;j<fac.size();j++)
            {
                int d=fac[j]*i+c;
                fac[j]=d%10;
                c=d/10;
            }
            while(c)
            {
                fac.push_back(c%10);
                c/=10;
            }
        }
        reverse(fac.begin(),fac.end());
        return fac;
 }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends