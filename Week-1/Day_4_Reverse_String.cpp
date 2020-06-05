class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0,j=s.size()-1;
        
        while(i<=j)
        {
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
        
    }
};
//The idea is based on opposite directional two pointer approach.
//Time Complexity O(N) with O(1) extra space
