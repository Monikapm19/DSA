class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            int count=0;
            int num=i;
            while(num>0){
            int lastdig=num&1;
            count+=lastdig;
            num=num>>1;
            }
            ans.push_back(count);
        }
        return ans;
    }
};