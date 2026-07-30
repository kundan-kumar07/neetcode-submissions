class Solution {
   public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st;
        for (string s : wordList) {
            st.insert(s);
        }

        queue<pair<string, int>> q;
        q.push({beginWord, 1});
        st.erase(beginWord);
        while (!q.empty()) {
            pair p = q.front();
            string original = p.first;
            int count = p.second;
            if(original==endWord){
                return count;
            }
            q.pop();
            for (int i = 0; i < original.size(); i++) {

                for (char c = 'a'; c <= 'z'; c++) {
                    string temp=original;
                    temp[i]=c;
                    if(st.find(temp)!=st.end()){
                        q.push({temp,count+1});
                        st.erase(temp);
                    }



                }
            }
        }
        return 0;
    }
};
