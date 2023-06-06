class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        unordered_set<int> u;
        for(int j=0; j<arr.size(); j++){
            for(int i=j+1; i<arr.size(); i++){
                int d = abs(arr[i]-arr[j]);
                if(u.find(d)==u.end()){
                    u.insert(d);
                }
                // cout<<d<<endl;
                j++;
            }
        }
        if (u.size()>1){
            return false;
        }
        return true;
        
    }
};