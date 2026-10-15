class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = INT_MAX;

        int ans = INT_MAX;
        while(l < r) {
            int mid = l + (r - l) / 2;

            long long total = 0;
            for(int i = 0; i < piles.size(); i++) {
                total += piles[i] / mid + (piles[i] % mid == 0 ? 0 : 1);
            }
            if(total <= h) {
                ans = min(ans, mid);
                r = mid;
            } else {
                l = mid + 1;
            }
        }

        return ans;
    }
};
