class Solution {
public:
    string reverseStr(string s, int k) {
        int n= s.size();
        int start = 0;
        int end = k-1;
        bool flag = true;
        for(int i=0; i<n;i+=k)
        {
            if(flag)
                reverseStr(s,i,i+k-1); 
            
            flag = !flag;
        }
        
        
        return s;
    }
    
    void reverseStr(string &s,int low, int high){
        high = min(high,(int)s.size()-1);
        while(low<high){
            swap(s[low++],s[high--]);
        }
    }
};