class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l = 0;
        int maxLength = 0;
        map<char, int> mp;
        for(int i = 0; i < n; i++) {
            if(mp.find(s[i]) != mp.end()) {
                l = max(l, mp[s[i]] + 1);
            }
            mp[s[i]] = i;
            maxLength = max(maxLength, i - l + 1);
        }

        return maxLength;
    }
};
