class Solution {
public:
    /*
    blocks = "WBBWWBBWBW", k = 7
    Output: 3
    */
    int minimumRecolors(string blocks, int k) {
        int countW = INT_MAX;
        int n = blocks.size();
        for(int i = 0; i < n - k + 1; i++)
        {
            int curr = 0;
            for(int j = i; j < i+k; j++)
            {
                if(blocks[j]=='W') 
                {
                    curr++;
                }
            }
            countW = min(curr,countW);
        }
        return countW;
        
        
    }
};