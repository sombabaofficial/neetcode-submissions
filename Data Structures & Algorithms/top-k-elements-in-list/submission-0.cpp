#define pii pair<int,int>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        priority_queue<pii,vector<pii>,greater<pii>>pq;

        unordered_map<int,int>mpp;

        for(auto it:nums)mpp[it]++;

        for(auto it:mpp)
        {
            if(pq.size()<k) pq.push({it.second,it.first});
            else 
            {
                int topfreq = pq.top().first;
                if(topfreq<it.second)
                {
                    pq.pop();
                    pq.push({it.second,it.first});
                }
            }
        }

        vector<int>ans;

        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
