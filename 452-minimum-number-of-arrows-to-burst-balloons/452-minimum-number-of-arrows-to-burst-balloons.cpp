    bool cmp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
class Solution {
public:

    int findMinArrowShots(vector<vector<int>>& intervals) {
       sort(intervals.begin(),intervals.end(),cmp);
        if(intervals.size()==0) return 0;
        int arrow=1;
        int end=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>end){
                arrow++;
                end=intervals[i][1];
            }
        }
        return arrow;
    }
};