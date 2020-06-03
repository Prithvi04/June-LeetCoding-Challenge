class Solution {
        static bool cmp(const vector<int> &a,const vector<int> &b)
    {
        
            return a[1]-a[0]>b[1]-b[0];
    }
public:

    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),cmp);
        int sum=0;
        for(int i=0;i<(costs.size()/2);i++)
            sum+=costs[i][0];
        for(int i=(costs.size()/2);i<costs.size();i++)
            sum+=costs[i][1];
        
        return sum;
    }
};
//The idea is to send all 2N people to city A by paying them the required cost.
//Then send N people to city B by minimizing the cost of refunc i.e (cost of B-cost of A).
//the sum of N/2 with minimal refunds send to city A,
// send others to city B.