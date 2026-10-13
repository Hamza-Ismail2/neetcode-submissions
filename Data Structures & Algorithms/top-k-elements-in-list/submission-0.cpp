class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> vp;
        map<int, int> count;

        for(auto num : nums) {
            count[num]++;
        }

        for(auto x : count) {
            vp.push_back({x.second, x.first});
        }

        sort(vp.begin(), vp.end(), greater<pair<int,int>>());
        vector<int> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(vp[i].second);
        }
        return ans;
    }
};
