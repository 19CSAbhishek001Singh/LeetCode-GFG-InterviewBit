class Solution {
public:
    int mySqrt(int x) {
        int l=1;
        int h=x;
        int m;      
        while ( l<=h ) {
            m = l + (h-l)/2;
     // instead of m*m == x, use this to avoid overflow
            if ( m == x/m ) {       
                return m;
            }
   // if the m*m is bigger than x, then move to smaller numbers
            else if ( m > x/m ) {
                h = m-1;
            }
   // move to bigger numbers         
            else {                  
                l = m+1;
            }
        }
        return l-1;             
    }
};