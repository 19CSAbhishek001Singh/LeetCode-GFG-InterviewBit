class Solution {
public:
/*
A[0] to A[i] forms our first complete set including all numbers.
This complete set can satisfy any number from 1 to k, as the first 
number in the sequence.
Then we continue this process, to find out the next complete set.
*/
    int shortestSequence(vector<int>& rolls, int k) {
        int res = 1;
        unordered_set<int> s;
        for (int a : rolls) {
            s.insert(a);
            if (s.size() == k) {
                res++;
                s.clear();
            }
        }
        return res;
    }
};