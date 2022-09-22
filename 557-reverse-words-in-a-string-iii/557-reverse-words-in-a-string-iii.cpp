class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int start = 0;
        for(int end = 0; end<n; end++)
        {
            if(s[end]==' '){
                reverseStr(s,start,end-1);
                start= end+1;
            }
        }
        reverseStr(s,start,n-1);  
        return s;
    }
    
    void reverseStr(string &s,int low, int high){
        while(low<=high){
            swap(s[low++],s[high--]);
        }
    }
};