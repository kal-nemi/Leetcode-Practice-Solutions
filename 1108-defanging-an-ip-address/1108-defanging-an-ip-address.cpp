class Solution {
public:
    string defangIPaddr(string address) {
        string ans,s;
        for(int i=0; i<address.length() ;i++)
        {
            if(address[i]=='.') 
            {
                s="[.]";
                ans+=s;
                // cout<<ans<<endl;
            }
            else {
                ans+=address[i];
            }
        }
        // cout<<ans<<endl;
        return ans;

    }
};