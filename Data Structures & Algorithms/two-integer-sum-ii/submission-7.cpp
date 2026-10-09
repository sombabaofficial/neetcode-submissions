class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n= numbers.size();

        unordered_map<int,int>mpp;

       // for(int i=0;i<n;i++) mpp[numbers[i]]=i;

        for(int i=0;i<n;i++)
        {
            int find = target - numbers[i];

            if(mpp.count(find)) 
            {
                int minIdx = min(mpp[find]+1,i+1);
                int maxIdx = max(mpp[find]+1,i+1);
                return {minIdx,maxIdx};
            }
            mpp[numbers[i]]=i;
        }

        return {};
    }
};

// t.c = O(n)
// s.c = O(n)
