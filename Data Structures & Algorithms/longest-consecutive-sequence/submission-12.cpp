class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();

        unordered_set<int>s(begin(nums),end(nums));
        int maxi = 0;

        for(auto it:s)
        {

            if(s.count(it - 1)) continue;
            int cnt = 1;

            if(s.count(it + cnt))
            {
                while(s.count(it + cnt))
                {
                    cnt++;
                }
            }

            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};
