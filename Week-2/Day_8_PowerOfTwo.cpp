class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)
            return false;
        return ceil(log2(n))==floor(log2(n));
        
    }
};
//The ceil of Log to the base 2 and floor of log to the base 2 should be same