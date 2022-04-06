class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int count=0;
        int n=intervals.size();
        int left=0;
        int right=1;
        while(right<n){
            if(intervals[left][1]<=intervals[right][0]){
                // non-overlapping case
                left=right;
                right++;
            }
            else if(intervals[left][1]<=intervals[right][1]){
                // overlapping case 1(remove right interval)
                count++;
                right++;
            }
            else if(intervals[left][1]>intervals[right][1]){
                //overlapping case 2 remove left interval
                count++;
                left=right;
                right++;
            }
        }
        return count;
    }
};