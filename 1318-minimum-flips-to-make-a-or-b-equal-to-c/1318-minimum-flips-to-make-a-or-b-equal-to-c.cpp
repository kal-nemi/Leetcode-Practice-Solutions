class Solution {
public:
    int minFlips(int a, int b, int c) {
        int d = a|b;
        int cnt = 0;
        int x,y,z;
        for(int i=0; i<32; i++){
            x = a & (1<<i);
            y = b & (1<<i);
            z = c & (1<<i);
            
            if(z==0 && x!=0  && y==0) cnt++;
            else if(z==0 && x==0 && y!=0) cnt++;
            else if(x!=0 && y!=0 && z==0) cnt+=2;
            else if(x==0 && y==0 && z!=0) cnt++;
        }
        return cnt;
    }
};