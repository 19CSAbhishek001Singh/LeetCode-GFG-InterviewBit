class Solution {
public:
    #define mod 1000000007
    int countHousePlacements(int n) {
         long long y=1,z=1,w=2;
            for(int x=2;x<=n;x++){
                y=z;
                z=w;
                w=(y+z)%mod;
            }
        return (w*w)%mod;
    }
};