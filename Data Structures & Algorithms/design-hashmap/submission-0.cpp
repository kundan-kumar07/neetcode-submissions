class MyHashMap {
public:
    vector<pair<int,int>> m;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        for(auto &p:m){
            if(p.first==key){
                p.second=value;
                return;
            }
        }
        m.push_back({key,value});
        
    }
    
    int get(int key) {
        for(auto &p:m){
            if(p.first==key){
                return p.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        vector<pair<int,int>> temp;
        for(auto &p:m){
            if(p.first!=key){
                temp.push_back(p);
            }
        }
        m=temp;
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */