class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n=nums.size();
        vector<int> odd,even,ans(n,0);
        for(int i=0;i<n;i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end());
        for(int i=0;i<even.size();i++){
            ans[2*i]=even[i];
        }
        for(int i=0;i<odd.size();i++){
            ans[2*i+1]=odd[i];
        }
        return ans;
        
    }
};