class Solution {
public:
    #define mod 1000000007
// we have n*2 plots n plot on each side so lets take one side of street if answer to that is x
//  then for n*2 will be x*x
// try the test cases for few examples
// for n=1 we have 2*2
// for n=2 we have 3*3
// for n=3 we have 5*5
// see a fibonnaci pattern here 2,3,5....
    int countHousePlacements(int n) {
         long long x=1,y=1,z=2;
            for(int i=2;i<=n;i++){
                x=y;
                y=z;
                z=(x+y)%mod;
            }
        return (z*z)%mod;
    }
};