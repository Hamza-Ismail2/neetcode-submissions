class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> vp;
        for(int i = 0; i < nums.size(); i++) {
            vp.push_back({nums[i], i});
        }
        auto cmp = [](pair<int,int> a, pair<int,int> b) {
            if(a.first == b.first) {
                return a.second < b.second;
            }
            return a.first < b.first;
        };

        sort(vp.begin(), vp.end(), cmp);
        int l = 0, r = nums.size() - 1;
        while(l < r) {
            if(vp[l].first + vp[r].first == target) {
                return (vp[l].second > vp[r].second) ? 
                std::vector<int>{vp[r].second, vp[l].second} : std::vector<int>{vp[l].second,vp[r].second};
            } else if (vp[l].first + vp[r].first < target) {
                l++;
            } else {
                r--;
            }
        }

        return {0, 0};
    }
};
