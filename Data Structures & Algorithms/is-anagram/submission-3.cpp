class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpp1,mpp2;
        
        for(auto it : s) mpp1[it]++;
        for(auto it : t) mpp2[it]++;

        return mpp1 == mpp2 ? true:false;
    }
};

// t.c = 
// s.c = o(n)
