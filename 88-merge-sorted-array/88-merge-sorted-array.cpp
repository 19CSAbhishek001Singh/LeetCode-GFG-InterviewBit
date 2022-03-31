class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1=m-1,p2=n-1,i=m+n-1;
        while(p2>=0){
            if(p1>=0&&nums1[p1]>nums2[p2]){
                nums1[i--]=nums1[p1--];
            }
            else{
                nums1[i--]=nums2[p2--];
            }
        }
        
       // learn  gap method to merge two sorted arrays but in their individual array kind of             sorting
         // code here 
 /*
 int gap = ceil((float)(n + m) / 2);
  while (gap > 0) {
    int i = 0;
    int j = gap;
    while (j < (n + m)) {
      if (j < n && ar1[i] > ar1[j]) {
        swap(ar1[i], ar1[j]);
      } else if (j >= n && i < n && ar1[i] > ar2[j - n]) {
        swap(ar1[i], ar2[j - n]);
      } else if (j >= n && i >= n && ar2[i - n] > ar2[j - n]) {
        swap(ar2[i - n], ar2[j - n]);
      }
      j++;
      i++;
    }
    if (gap == 1) {
      gap = 0;
    } else {
      gap = ceil((float) gap / 2);
    }
  }
*/
    }
};
