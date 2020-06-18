class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        int n=citations.size();
        if(n==0)
            return 0;
        int l=0,h=n-1;
        int mid=-1;
        int ans=0;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(citations[mid]>=n-mid)
            {
                ans=n-mid;
                h=mid-1;
            }
            else
                l=mid+1;
        }
        
        return ans;
        
    }
};
//O(logn) solution