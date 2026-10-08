class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;  // value,idx
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            int need = target-nums[i];

            if(mpp.find(need)!=mpp.end())
            {
                int smallerIdx = min(i,mpp[need]);
                int largerIdx = max(i,mpp[need]);

                return {smallerIdx, largerIdx};
            }
            mpp[nums[i]] = i;
        }

        return {};
    }
};
