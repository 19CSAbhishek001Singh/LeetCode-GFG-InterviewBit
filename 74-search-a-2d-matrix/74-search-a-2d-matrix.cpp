class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int key) {
        int n=arr.size();
        int m=arr[0].size();
        int lo=0;
        int high=(n*m)-1;
        while(lo<=high){
            int mid=(high+lo)/2;
            // arr[mid/m] and [mid%m] gives arr[i][j] index element that is mid element
            if(arr[mid/m][mid%m]==key){
                return true;
            }
            else if(arr[mid/m][mid%m]<key){
                lo=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};

// also do this
// https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1