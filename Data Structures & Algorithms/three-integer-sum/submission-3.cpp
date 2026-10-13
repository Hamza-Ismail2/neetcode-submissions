class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i = 0; i < n; i++) {
            if(i != 0) {
                while(i < n && nums[i] == nums[i - 1]) {
                    i++;
                }
            }
            if(i >= n) {
                return ans;
            }
            int l = i + 1, r = n - 1;
            while(l < r) {
                if(nums[i] + nums[l] + nums[r] == 0) {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1])  {
                        l++;
                    }
                } else if(nums[i] + nums[l] + nums[r] > 0) {
                    r--;
                } else {
                    l++;
                }
            }
    
        }

        return ans;
    }
};
