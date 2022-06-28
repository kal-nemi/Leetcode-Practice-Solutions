// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
        int res = 0;
        unordered_set<int> h;
        for(int i=0 ; i<n ; i++)
        {
            h.insert(arr[i]);
        }
        for(int i=0 ; i<n ; i++)
        {
            if(h.find(arr[i]-1)==h.end())
            {
                int curr = 1;
                while(h.find(arr[i]+curr)!=h.end())
                {
                    curr++;
                }
                res = max(res,curr);
            }
        }
        return res;
      //Your code here
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends