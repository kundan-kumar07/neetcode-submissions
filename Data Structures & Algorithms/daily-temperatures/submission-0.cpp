class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> st;
        int n=temp.size();

        vector<int> res(n,0);
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(i);
            }
            else{
                while(!st.empty() && temp[i]>temp[st.top()]){
                int t=st.top();
                st.pop();
                res[t]=i-t;
                }
                st.push(i);
            }

            

            
            
        }
        return res;

    }
};
