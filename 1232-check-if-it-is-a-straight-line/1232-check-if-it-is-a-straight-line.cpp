class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        unordered_set<int> slopeArr;
        int slope;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int x = abs(coordinates[i][0]-coordinates[j][0]);
                int y = abs(coordinates[i][1]-coordinates[j][1]);
                if(x!=0){
                    slope = y/x;
                }
                else{
                    slope = 0;
                }
                if(slopeArr.find(slope)==slopeArr.end()){
                    slopeArr.insert(slope);
                }
            }
        }
        if(slopeArr.size()>1) return false;
        return true;
        
    }
};