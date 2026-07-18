class LRUCache {
public:
    list<int> dll;
    unordered_map<int,pair<list<int>::iterator,int>> m;
    int n;

    LRUCache(int capacity) {
        n=capacity;

        
    }
    void makeMostRused(int key){
        dll.erase(m[key].first);
        dll.push_front(key);
        m[key].first=dll.begin();
    }
    
    int get(int key) {
        int val;
        if(m.find(key)!=m.end()){
            val=m[key].second;
            makeMostRused(key);
            return val;


            
        }
        return -1;
        
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            makeMostRused(key);
            m[key].second=value;
        }
        else{
            dll.push_front(key);
            m[key]={dll.begin(),value};
            n--;
        }
        if(n<0){
            int keyToDelete=dll.back();
            m.erase(keyToDelete);
            dll.pop_back();
            n++;
        }
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */