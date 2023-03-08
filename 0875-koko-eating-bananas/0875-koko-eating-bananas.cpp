class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = 1000000000;
        //now check the length
        while(left < right){
            int middle = (left + right) / 2, total = 0;
            for(int element : piles){
                //calculate total 
                total = total + (element + middle - 1)/ middle;
            }
            //check the total from the given h
            if(total > h){
                left = middle + 1;
            }else{
                right = middle;
            }
        }
        //return value
        return left;
    }
};