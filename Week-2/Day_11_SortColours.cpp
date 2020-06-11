class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int lo=0,mid=0,hi=n-1;
        while(mid<=hi)
        {
            switch(nums[mid])
            {
                case 0:
                    {
                        swap(nums[lo],nums[mid]);
                        lo++;
                        mid++;
                        break;
                    }
                case 1:
                    {
                        mid++;
                        break;
                    }
                case 2:
                    {
                        swap(nums[mid],nums[hi]);
                        hi--;
                        break;
                    }
            }
        }
        
    }
};
//Naive soln: A rather straight forward solution is a two-pass algorithm using counting sort.
//First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number of 0's, then 1's and followed by 2's.
//that is 4 traversals of original vecctor.

//Efficient solution is 3-way partitoning of the vector known as Dushnationalfy Algorithm
//Time Compl O(N) and const extra space i.e O(1).