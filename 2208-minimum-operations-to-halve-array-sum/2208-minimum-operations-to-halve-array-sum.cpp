class Solution {
public:
    int halveArray(vector<int>& nums) {
       priority_queue<double> q;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
            sum+=nums[i];
        }
        long long cnt=0;
        double sumhalf=0;
        while(sumhalf*2<double(sum)){
            double val=q.top();
            q.pop();
            sumhalf+=val/2;
            q.push(val/2);
            cnt++;
        }
        return cnt;
    }
};