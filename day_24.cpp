class LRUCache {
private:
    // {key, {value,pointer to time}}
    unordered_map<int,pair<int,list<int>::iterator>>lru;
    
    // list will store the key
    // least recently accessed element will be in back and recently accessed item will
    // be in the front
    list<int>time;
    
    int n;
    
    void add_to_lru(unordered_map<int,pair<int,list<int>::iterator>>::iterator it, int key){
        // erase the occurence of key from time
        time.erase(it->second.second);
        
        // since this element was recently accessed add it to front of the list
        time.push_front(key);
        
        // the pointer to the beginning element
        it->second.second=time.begin();
    }

public:
    LRUCache(int capacity) {
        n=capacity;
    }
    
    int get(int key) {
        auto it = lru.find(key);
        if (it!=lru.end()) { // if already present
            add_to_lru(it,key);
            return it->second.first;
        }
        return -1;
    }
    
    void put(int key, int value) {
        auto it = lru.find(key);
        if (it!=lru.end()){ // if already present
            it->second.first=value;
            add_to_lru(it,key);
        }
        else if(it==lru.end() and lru.size()<n){ // if not present but still space in cache
            time.push_front(key);
            lru[key]={value,time.begin()};
        }
        else{ // if not present and the cache is full
            lru.erase(time.back()); // erase the least recently used element
            time.pop_back();
            
            time.push_front(key); // add the key to the list
            lru[key]={value,time.begin()}; // add the key value pair and pointer to the time iterator
        }
    }
};

auto speedup=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
