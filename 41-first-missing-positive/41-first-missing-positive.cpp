class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        bool one=false;
        int n=a.size();
        for(int i=0;i<n;i++){
            if(a[i]==1) {
                one =true;
            }
            if(a[i]<1||a[i]>n){
                a[i]=1;
            }
        }
        if(one == false) return 1;
        for(int i=0;i<n;i++){
            int indx=abs(a[i]);
            a[indx-1]=-abs(a[indx-1]);
        }
        for(int i=0;i<n;i++){
            if(a[i]>0){
                return i+1;
            }
        }
        return n+1;
    }
};