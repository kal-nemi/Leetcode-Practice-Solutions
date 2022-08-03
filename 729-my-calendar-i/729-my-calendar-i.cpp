class MyCalendar {
    map<int,int> s;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto [x,y]:s)
        {
            if(x<end && y>start)
                return false;
        }
        s.insert({start,end});
        return true;
        
        
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */