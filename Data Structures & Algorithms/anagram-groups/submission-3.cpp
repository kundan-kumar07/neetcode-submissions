class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (string s : strs) {
            string st = s;
            sort(st.begin(), st.end());

            m[st].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto& all : m) {
            ans.push_back(all.second);
        }
        return ans;
    }
};
