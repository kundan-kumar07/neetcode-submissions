class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        stack<char> st2;
        for(char c:s){
            st.push(c);
        }
        while(!st.empty()){
            if(st2.empty()){
                st2.push(st.top());
                
            
            }
            else if((st.top()=='{' && st2.top()=='}') || (st.top()=='[' && st2.top()==']') || (st.top()=='(' && st2.top()==')')){
                
                st2.pop();

            }
            else{
                st2.push(st.top());
                
            }
            st.pop();
        

        }
        if(st.empty() && st2.empty()){
            return true;
        }
        return false;
        
    }
};
