class Solution {
public:
    int countCollisions(string dir) {
        int i =0;
        int n = dir.length()-1;
        while(i<dir.length() && dir[i]=='L')
            i++;
        
        while(n>=0 && dir[n]=='R')
            n--;
        int count=0;
        for(int j =i  ;j<=n;j++){
            if(dir[j] != 'S'){
                count++;
            }
        }
        return count;
    }
};