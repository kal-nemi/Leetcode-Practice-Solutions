class Solution {
public:
    int kthFactor(int n, int k) {
        for(int s =1; s<= n/2 ; ++s){
            if(n%s==0 && --k==0){
                return s;
            }
        }
        return k==1 ? n: -1;
        
    }
};