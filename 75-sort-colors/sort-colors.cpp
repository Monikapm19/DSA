class Solution {
public:
    void sortColors(vector<int>& nums) {//solve this with 3 pointers and inbuilt swap fxn O(n)
        int n= nums.size();
        int low=0;int mid=0;int high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};