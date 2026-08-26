class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<high){
            int mid=(low+high)/2;
            if(arr[mid]<arr[mid+1]){//increasing side
                low=mid+1;
            }
            else{//decresing side
                high=mid;
            }
       }
       return low;
    }
};