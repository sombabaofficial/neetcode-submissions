class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int>mpp;

        set<vector<int>>s;

        for(int i=0;i<n;i++)
        {
            int target = -nums[i];

            for(int j=0;j<n;j++)
            {
                if(i==j) continue;
                int find = target - nums[j];

                if(mpp.count(find) && mpp[find]!=i && mpp[find]!=j) 
                {
                    vector<int>temp{nums[i],nums[j],find};
                   
                    sort(begin(temp),end(temp));
                    s.insert(temp);
                } 
                mpp[nums[j]]=j;
            }
        }

        vector<vector<int>>ans(begin(s),end(s));
        return ans;
    }
};
