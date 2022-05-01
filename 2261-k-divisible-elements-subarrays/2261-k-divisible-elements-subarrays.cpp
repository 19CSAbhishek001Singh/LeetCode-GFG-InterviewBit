class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        map<vector<int>,int>m;
		int n = nums.size();
		for(int i=0;i<n;i++){
			int count=0;
			vector<int>v;
			for(int j=i;j<n;j++){
				if(nums[j]%p == 0){
					count++;
				}
				if(count <= k){
					v.push_back(nums[j]);
					m[v]++;
				}
				else break;
			}
		}
		return m.size();
    }
};