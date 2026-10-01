class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i=1;i<=n;i++){//however 1st element must be 0
            ans[i]=ans[i/2]+i%2;
        }
        return ans;
    }
};