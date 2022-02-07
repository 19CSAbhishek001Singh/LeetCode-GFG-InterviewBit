class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        // do one more time to learn
        unordered_map<int, int> mymap;
		mymap[0]=-1;
		int sum=0;
		for(int i=0;i<nums.size();i++)
		{
			sum=sum+nums[i];
			if(mymap.count(sum%k)>0)
			{
				if(i-mymap[sum%k]>=2) return true;
			}
			else mymap[sum%k]=i;
		}
		return false;
    }
};