class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();

        string s1;
        for(int i=0;i<n;i++)
        {
            if(isalnum(s[i])) s1+=tolower(s[i]);
        }

        if(s1.size()==1) return true;
        int start = 0;
        int end = s1.size()-1;

        while(start<end)
        {
            if(s1[start]!=s1[end]) return false;
            start++;end--;
        }

        return true;
    }
};

//