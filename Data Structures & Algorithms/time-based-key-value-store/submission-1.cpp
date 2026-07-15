class TimeMap {
public:
    unordered_map<string,vector<pair<string,int>>> m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({value,timestamp});

        
    }
    
    string get(string key, int timestamp) {
    string ans = "";

    int l = 0;
    int r = m[key].size() - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (m[key][mid].second <= timestamp) {
            ans = m[key][mid].first;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return ans;
}
};
