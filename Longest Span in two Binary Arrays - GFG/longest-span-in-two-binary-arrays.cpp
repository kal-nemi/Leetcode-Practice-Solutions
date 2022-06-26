// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n) {
            unordered_map<int,int> mp;
            int temp[n];
            for(int i=0 ; i<n ; i++ )
            {
                temp[i] = (int)arr1[i] - (int)arr2[i];
            }
            int preSum = 0 , ans = 0;
            for(int i=0; i<n ; i++)
            {
                preSum += temp[i];
                if(preSum == 0) ans = i+1;
                // if(mp.find(preSum)==mp.end())
                //     mp.insert()
                if(mp.find(preSum)!=mp.end())
                {
                    ans = max(ans,i-mp[preSum]);
                }
                else mp[preSum] = i;
            }
            return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        bool arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.longestCommonSum(arr1, arr2, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends