class Solution {
public:
    bool halvesAreAlike(string s) {
        int left = 0,right = s.size()-1;
        // unordered_set<char> s = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        string vowels = "aeiouAEIOU";
        int lcnt = 0, rcnt = 0;
        while(left<right){
            lcnt += (vowels.find(s[left])<vowels.length())?1:0;
            rcnt += (vowels.find(s[right])<vowels.length())?1:0;
            left++;
            right--;
        }
        return lcnt==rcnt;
        
        
    }
};