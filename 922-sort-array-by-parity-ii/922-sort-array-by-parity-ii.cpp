class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& arr) {
        int n=arr.size();
        int i = 0, j = n-1;
        while (i < j) {
        while (i <= n - 1 and arr[i]%2!=0)
            i += 1;
        while (j >= 0 and arr[j]%2== 0)
            j -= 1;
        if (i < j )
            swap(arr[i], arr[j]);
    }
    if (i == 0 || i == n)
        return arr;
    int k = 0;
    while (k < n && i < n ) {
        swap(arr[k], arr[i]);
        i = i + 1;
        k = k + 2;
    }
        return arr;
    }
};