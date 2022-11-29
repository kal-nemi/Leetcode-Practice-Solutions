class RandomizedSet {
    vector<int> v;
    unordered_map<int,int>umap;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(umap.count(val)){
            return false;
        }
        v.push_back(val);
        umap[val] = v.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(!umap.count(val)) return false;
        
        auto it = umap[val];
        v[it] = v.back();
        v.pop_back();
        umap[v[it]] = it;
        umap.erase(val);
        return true;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */