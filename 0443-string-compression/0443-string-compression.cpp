class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        // if(n==1) return 1;
        int ans = 0;
        for(int i=0; i<n;){
            const char letter = chars[i];
            int cnt = 0;
            
            while(i<n && chars[i]==letter){
                ++cnt;
                ++i;
            }
            
            chars[ans++] = letter;
            
            if(cnt>1){
                for(const char c: to_string(cnt)){
                    chars[ans++] = c;
                }
            }
        }
        
        return ans;
        
        
        
    }
};