class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int n=nums.size();
        if(target<nums[0])
            return 0;
        if(target>nums[n-1])
            return n;
        int res=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                res=i;
                break;
            }
            if(nums[i]>target)
            {
                res=i;
                break;
            }
                
        }
        return res;
        
    }
};
//Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

//You may assume no duplicates in the array.