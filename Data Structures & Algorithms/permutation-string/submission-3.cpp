class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> vec1(26, 0);
        vector<int> vec2(26, 0);
        
        for(auto c : s1) {
            vec1[c - 'a']++;
        }

        int l = 0; bool match = false;
        
        for(int r = 0; r < s2.size(); r++) {
            char c = s2[r];
            vec2[c - 'a']++;

            if((r - l + 1) == s1.length() && vec1 == vec2) {
                match = true;
                break;
            }

            while(vec2[c - 'a'] > vec1[c - 'a']) {
                vec2[s2[l] - 'a']--;
                l++;
            }
        }

        return match;
    }
};
