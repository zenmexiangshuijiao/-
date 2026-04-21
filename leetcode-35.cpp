class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len=nums.size();
        int left=0;
        int right=len-1;
        while(left<right){
            int mid=(left+right)/2;
            if(target>nums[len-1]){
                return len;
            }
            else if(target>nums[mid]){
                left=mid+1;
            }
            else if(target<nums[mid]){
                right=mid-1;
            }
            else if(target==nums[mid]){
                return mid;
            }
        }
        int mid=(left+right)/2;
        if(target<=nums[mid]){
            return mid;
        }else{
            return mid+1;
        }
    }
};