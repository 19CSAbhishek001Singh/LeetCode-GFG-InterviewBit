class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
 // subarray vector to store subarray       
 //vector<int> subarray;
 int maxi = nums[0], sum = 0;
  //int s = 0;
  for (int i = 0; i < nums.size(); i++) {
    sum += nums[i];
    if (sum > maxi) {
     // subarray.clear();
      maxi = sum;
    //  subarray.push_back(s);
    //  subarray.push_back(i);
    }
    if (sum < 0) {
      sum = 0;
     // s = i + 1;
    }
  }
  //   for (int i = subarray[0]; i <= subarray[1]; i++) {
  //   cout << nums[i] << " ";
  // }
  //       cout<<endl;
  return maxi;
    }
};

// solve problem 1749 too
