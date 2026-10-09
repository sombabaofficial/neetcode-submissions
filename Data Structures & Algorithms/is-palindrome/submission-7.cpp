class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();

        int start = 0;
        int end = s.size()-1;

        while(start<end)
        {
            if(!isalnum(s[start]))
            {
                start++;continue;
            }
            if(!isalnum(s[end]))
            {
                end--;continue;
            }

            s[start]=tolower(s[start]);
            s[end]=tolower(s[end]);

            if(s[start]!=s[end]) return false;
            start++;end--;
        }

        return true;
    }
};

// t.c = O(n)
// s.c = O(1)