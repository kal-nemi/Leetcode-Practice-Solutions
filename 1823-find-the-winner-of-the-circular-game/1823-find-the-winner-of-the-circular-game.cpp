class Solution {
public:
    int fTW(int n, int k) {
        if(n==1) return 0;
        else
            return (fTW(n-1,k)+k)%n;  
    }
     
    int findTheWinner(int n, int k) {
            return fTW(n,k)+1;  
    }
    
};