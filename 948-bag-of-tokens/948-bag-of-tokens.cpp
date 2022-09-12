class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int n = tokens.size();
        int left = 0 , right = n-1;
        int score=0 ,maxScore =0;
        
        while(left<=right)
        {
            if(power>=tokens[left])
            {
                score +=1;
                maxScore = max(maxScore,score);
                power -= tokens[left];
                left++;
            }
            else if(score>0)
            {
                score -=1;
                power += tokens[right];
                right--;
            }
            else break;
        }
        return maxScore;
        
    }
};