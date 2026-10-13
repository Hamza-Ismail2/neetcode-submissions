class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i]) {
                int itr = i - 1;
                while(itr >= 0 && nums[itr] == 0) {
                    itr--;
                }
                itr++;
                if(itr >= 0) {
                    swap(nums[itr], nums[i]);
                }
            }
        }
    }
};