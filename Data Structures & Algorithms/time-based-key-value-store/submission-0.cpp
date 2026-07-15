class TimeMap {
public:
    unordered_map<string,vector<pair<string,int>>> m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({value,timestamp});

        
    }
    
    string get(string key, int timestamp) {
        string ans;
        for(auto &p:m[key]){
            if(p.second<=timestamp){
                ans=p.first;
            }
            else{
                break;
            }
        }
        return ans;
        
    }
};
