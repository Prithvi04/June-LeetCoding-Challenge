class Solution {
     vector<int> s;
public:
    Solution(vector<int>& w) {
             for (int ind : w){
            if(s.empty())
                s.push_back(ind);
            else
                s.push_back(ind + s.back());
        }
        
    }
    
    int pickIndex() {
        
        int x = s.back();
        int index = rand() % x;
        auto it = upper_bound(s.begin(), s.end(),index);
        return it - s.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */

//Functional question
//It taught me how to use Rand function to  solve the problem