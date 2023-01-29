class LFUCache {
    int cap;
    int t;
    map<int, pair<int, pair<int,int>>> mp;
    map<pair<int,int>,int> mp2;
    
public:
    LFUCache(int capacity) {
        cap = capacity;
        t = 0;
        
    }
    
    int get(int key) {
        if(mp.find(key) == mp.end())
            return -1;
        
        auto temp = mp[key];
        mp2.erase(temp.second);
        
        temp.second.first++;
        temp.second.second = ++t;
        mp[key] = temp;
        
        mp2[temp.second] = key;
        return temp.first;
        
    }
    
    void put(int key, int value) {
        
        if(cap == 0 && mp.empty())
            return;
        
        if(cap == 0 && mp.find(key)== mp.end())
        {
            auto it = mp2.begin();
            mp.erase(it->second);
            mp2.erase(it->first);
        }
        
        if(mp.find(key) == mp.end()){
            cap = max(cap -1 , 0);
        }
        
        if(mp.find(key) == mp.end()){
            pair<int, pair<int, int>> tmp = { value, { 0, ++t}};
            mp[key] = tmp, mp2[tmp.second] = key;
        }
        else {
            auto temp = mp[key];
            mp2.erase(temp.second);
            
            temp.first = value;
            temp.second.first++;
            temp.second.second = ++t;
            mp[key] = temp;
            
            mp2[temp.second] = key;
            
        }
        
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */