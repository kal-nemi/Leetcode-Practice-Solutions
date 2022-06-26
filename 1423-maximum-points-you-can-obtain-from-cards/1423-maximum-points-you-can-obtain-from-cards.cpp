class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxScore = 0;//
//         [2,5,8,7,6,1,3]
//         [2,5,8] = 15
//         [2,5,3] = 10
//         [2,1,3] = 6
//         [6,1,3] = 10
//         k= 3
        
//         s = 15
        int n = cardPoints.size();
        
        int currSum = 0;
        
        for(int i=0 ; i<k ; i++)
        {
            currSum += cardPoints[i];
        }
        
        maxScore = currSum;
        for(int i=0 ; i<k ; i++)
        {
            currSum -= cardPoints[k-i-1]; //removeing from left
            currSum += cardPoints[n-i-1]; //adding from right
            if(currSum > maxScore) maxScore = currSum; 
        }
        return maxScore;
        
    }
};