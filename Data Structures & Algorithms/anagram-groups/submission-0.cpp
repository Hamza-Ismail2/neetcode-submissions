class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, int> mp;
        map<string, vector<string>> mp2;

        for(int i = 0; i < strs.size(); i++) {
            string x = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp2[strs[i]].push_back(x);
            mp[strs[i]]++;
        }

        vector<vector<string>> ans;

        for(auto x : mp) {
            ans.push_back(mp2[x.first]);
        }

        return ans;
    }
};
