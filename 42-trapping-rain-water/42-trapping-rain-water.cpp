class Solution {
public:
    int trap(vector<int>& height) {
        
        // with O(1) space 
        int n=height.size();
        int left=0,right=n-1;
        int res=0;
        int maxleft=0,maxright=0;
        while(left<=right){
            
            if(height[left]<=height[right]){
                
            if(height[left]>=maxleft) maxleft=height[left];
            else
                res+=maxleft-height[left];
                
            left++;
            }
            else{
                  if(height[right]>=maxright) maxright=height[right];
                    else
                    res+=maxright-height[right];
                 right--;
            }
        }
        return res;
        
        
        
        
// int sum=0,max_left =0,max_right =0;
// for(int i=1;i<height.size();i++){
// max_left =*max_element(height.begin() ,height.begin()+i);
// max_right= *max_element(height.begin()+i,height.end());
// int ans = min(max_left,max_right)-height.at(i);
// if(ans<1){
// ans =0 ;
// }
// sum= sum+ans;
// }
// return sum;
        
        
    }
};