class Solution {
public:
	int longestValidParentheses(string s) {
    int open = 0, closed = 0; 
    int maxi = 0;
    for(char c:s){
        if(c=='(')
            open++;
        else if(c==')')
            closed++;
        
        if(open==closed){
            maxi = max(maxi, open+closed);
        }
        else if(closed>open){
            open = closed = 0;
        }
    }
    
    open = 0, closed = 0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='(')
            open++;
        else if(s[i]==')')
            closed++;
        
        if(open==closed){
            maxi = max(maxi, open+closed);
        }
        else if(open>closed){
            open = closed = 0;
        }
    }
    
    return maxi;
}
};