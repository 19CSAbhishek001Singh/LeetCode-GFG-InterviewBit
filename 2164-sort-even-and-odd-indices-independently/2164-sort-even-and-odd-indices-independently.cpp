class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
    int n=nums.size();
    vector<int> odd,even;
    for(int i=0;i<n;i++)  
    (i%2==1) ? odd.push_back(nums[i]) : even.push_back(nums[i]);
        // function as a parameter nice example
    //sort(begin(odd),end(odd),[](int a,int b){  return a>b; });
        sort(begin(odd),end(odd),greater<int>());
    sort(begin(even),end(even));
    for(int i=0,k=0;i<n;i+=2) nums[i]=even[k++];
    for(int i=1,k=0;i<n;i+=2) nums[i]=odd[k++];
    return nums;   
    }
};