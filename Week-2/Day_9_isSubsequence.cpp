class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="")
            return true;
        int i=0,j=0;
        int n=s.size();
        int m=t.size();
        while(i<n && j<m)
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
            if(i==n)
                return true;
            else if(j==m)
                return false;
            
        }
        return false;
        
    }
};
//A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters.