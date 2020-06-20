class Solution {
public:
    string getPermutation(int n, int k) {
        string s="";
        for(int i=1;i<=n;i++)
        {
            char ch=(char)(i+'0');
            s+=ch;
        }
        for(int i=1;i<k;i++)
        {
            next_permutation(s.begin(),s.end());
        }
        return s;
    }
};
//Uses next_permutation function of STL.