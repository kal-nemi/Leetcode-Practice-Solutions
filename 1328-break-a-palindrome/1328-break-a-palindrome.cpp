class Solution {
public:
    string breakPalindrome(string palindrome) {
        // string ans = "";
        int n = palindrome.length();
//         if(n==1) return ans;
//         int f = 0;
//         int l = n-1;
//         while(f<l)
//         {
//             if(palindrome[f]==palindrome[l])
//                 ans+=palindrome[f]+palindrome[l];
            
//             f++;
//             l--;
//         }
//         if (n%2!=0) ans[l-1]=ans[l]+1;
//         else ans[l] = ans[l]+1;
//         return ans;
        
        for(int i=0; i<n/2; i++)
        {
            if(palindrome[i]!='a'){
                palindrome[i]='a';
                return palindrome;
            }
        }
        palindrome[n-1]='b';
        return n<2? "":palindrome;
    }
};