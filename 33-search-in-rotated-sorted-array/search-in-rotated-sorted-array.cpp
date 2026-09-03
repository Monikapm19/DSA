class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0;
        int end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[st]<=nums[mid]){//left sorted so apply binary search in left half
               if(nums[st]<=target&&target<=nums[mid]){//left half
                    end=mid-1;
               }
               else{//right half
                    st=mid+1;
               }
            }
            else{//right sorted apply binary search in right half
              if(nums[mid]<=target&&target<=nums[end]){
                st=mid+1;
              }
              else{
                end=mid-1;
              }

            }
        } 
        return -1;
        
    }
};