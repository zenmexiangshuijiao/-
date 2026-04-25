class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1=nums1.size();
        int len2=nums2.size();
        int len=len1+len2;
        vector<int> nums(len);
        if(nums.empty()){
            return 0;
        }
        int index1=0;
        int index2=0;
        int index=0;
        while(index1<len1&&index2<len2){
            if(nums1[index1]>nums2[index2]){
                nums[index++]=nums2[index2++];
            }else{
                nums[index++]=nums1[index1++];
            }
        }
        while(index1<len1){
            nums[index++]=nums1[index1++];
        }
        while(index2<len2){
            nums[index++]=nums2[index2++];
        }
        if(len%2==0){
            double mid=((double)nums[len/2]+(double)nums[len/2-1])/2;
            return mid;
        }else{
            double mid=(double)nums[(len-1)/2];
            return mid;
        }
    }
};