// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	   int nextGap(int x)
    {
        if(x <= 1)
        return 0;
        else
        return (x/2) + (x%2);
    }

    void merge(int arr1[], int arr2[], int n, int m) {
        // code here
        int i, j;
        int sum =  m+ n;
        int gap =  nextGap(sum);
        while(gap > 0)
        {
            //first array -> arr1 
            for(i = 0; i + gap < n; i++)
            {
                if(arr1[i] > arr1[i+gap])
                swap(arr1[i], arr1[i+gap]);
            }
            //for both the first and second array 
            if(gap > n)
            j = gap - n;
            else
            j = 0;
            for(; j < m && i < n; j++, i++)
            {
                if(arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
            }
            //for the second array only 
            if(j < m)
            {
                for(j = 0; j + gap < m; j++)
                {
                    if(arr2[j] > arr2[j+gap])
                    swap(arr2[j], arr2[j+gap]);
                }
            }
            gap = nextGap(gap);
        }
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends