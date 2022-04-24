class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        int ans = 0; 
//    given circle.length can be maximum 200 so our x and y will range till 200 max
        for (int x = 0; x <= 200; ++x) 
            for (int y = 0; y <= 200; ++y) {
                bool found = false; 
//         iterating on each row of cicles array              
                for (auto& a : circles) 
//              generalized equation can be
//                     x^2 + y^2 <= r^2
                    if (pow(x-a[0], 2) + pow(y-a[1], 2) <= pow(a[2], 2)) 
                        found = true; 
                if (found) ++ans; 
            }
        return ans; 
    }
};