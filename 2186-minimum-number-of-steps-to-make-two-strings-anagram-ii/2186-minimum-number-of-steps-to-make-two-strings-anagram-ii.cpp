class Solution {
public:
    int minSteps(string s, string t) {
    unordered_map<char,int>sp;
    unordered_map<char,int>tp;
    int count=0;
    int res=0;
    for(auto i:s){
        sp[i]++;
    }
    for(auto i:t){
        tp[i]++;
    }
    for(auto i:sp){
        count=sp[i.first]-tp[i.first];
        if(count<0)count=0;
        res+=count;
       
    }
    for(auto i:tp){
        count=tp[i.first]-sp[i.first];
        if(count<0)count=0;
        res+=count;
    }
    return res;
    }
};   