class Solution {
public:
    vector<int> pivotArray(vector<int>& a, int pivot) {
        vector<int> v;
        int count =0;
      for(int i=0;i<a.size();i++){
      if(a[i]<pivot){
          v.push_back(a[i]);
      }
          else if(a[i]==pivot){
              count++;
          }
      }
        while(count--){
            v.push_back(pivot);
        }
     for(int i=0;i<a.size();i++){
      if(a[i]>pivot){
          v.push_back(a[i]);
      }
     }
              return v;      


    }
};