class Solution {
public:
int c = 0;
void solve(vector<int>& nums,int i){
    if(i==nums.size()){
        c++;
    }
        for(int k=i;k<nums.size();k++){
            swap(nums[i],nums[k]);
            if(nums[i]%(i+1)==0 || (i+1)%nums[i]==0)
            solve(nums,i+1);
            swap(nums[i],nums[k]);
        }
}
int countArrangement(int n) {
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        nums[i] = i+1;
    }
    solve(nums,0);
    return c;
}
};