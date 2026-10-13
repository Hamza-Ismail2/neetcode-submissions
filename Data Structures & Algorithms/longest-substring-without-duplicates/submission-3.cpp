class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        map<char,int> mp;
        int maxLength = 0;
        int l = 0;

        for(int i = 0; i < n; i++) {
            char c = s[i];

            if(mp.find(c) != mp.end()) {
                maxLength = max(maxLength, i - l);
                while(l < mp[c] + 1) {
                    mp.erase(s[l]);
                    l++;
                }
                // l = mp[c] + 1;
                // mp.clear();
                mp[c] = i;
            } else {
                mp[c] = i;
            }
        }
        if(mp.find(s[n - 1]) != mp.end()) {
            maxLength = max(maxLength, n - l);
        }

        return maxLength;
    }
};
