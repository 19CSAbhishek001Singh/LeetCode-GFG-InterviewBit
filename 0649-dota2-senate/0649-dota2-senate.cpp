class Solution {
public:
      string predictPartyVictory(string senate) {
        queue<int> R, D;
        int n = senate.size();
        for(int i = 0; i < n; i++) {
            if(senate[i] == 'R') {
                R.push(i);
            } else {
                D.push(i);
            }
        }
        while(R.size() && D.size()) {
            int A = R.front();
            int B = D.front();
            R.pop();
            D.pop();
            if(A < B) {
                R.push(A + n);
            } else {
                D.push(B + n);
            }
        }
        return D.size() == 0? "Radiant": "Dire";
    }
};