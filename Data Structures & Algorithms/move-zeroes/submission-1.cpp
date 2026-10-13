class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int cnt = 0;
        for(auto num: nums) {
            if(num) {
                ans.push_back(num);
            } else {
                cnt++;
            }
        }

        for(int i = 0; i < cnt; i++) {
            ans.push_back(0);
        }

        nums = ans;
    }
};