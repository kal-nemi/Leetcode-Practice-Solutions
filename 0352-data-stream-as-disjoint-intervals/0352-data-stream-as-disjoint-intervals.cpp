class SummaryRanges {
public:
    
    set<int> st;
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        st.insert(value);
        
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>>res;
        for (int n: st){
            int siz = res.size();
            if(siz  && res.back().back()+1==n){
                res.back().back() = n;
            }
            else res.push_back({n,n});
        }
        return res;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */