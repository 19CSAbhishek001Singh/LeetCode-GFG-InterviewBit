class Solution {
public:
    int calculate(string s) {
        char sign='+';
        stack<int> st;
        for(int i=0;i<s.size();i++){
            
            if(isdigit(s[i])){
                int val=0;
                while(i<s.size()&&isdigit(s[i])){
                    val=val*10+(s[i]-'0');
                    i++;
                }
                i--;
                if(sign=='+'){
                    st.push(val);
                }
                else if(sign=='-'){
                    st.push(-val);
                }
                else if(sign=='*'){
                    int x=st.top();
                    st.pop();
                    st.push(val*x);
                }
                else if(sign=='/'){
                    int x=st.top();
                    st.pop();
                    st.push(x/val);
                }
            }
            else if(s[i]!=' '){
                sign=s[i];
            }
    
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        
        return sum;
    }
};