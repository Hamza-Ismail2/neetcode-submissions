class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = INT_MIN;

        int l = 0, r = heights.size() - 1;

        while(l < r) {
            int le = min(heights[l], heights[r]);
            int tr = le * (r - l);
            area = max(area, tr);
            if(heights[l] > heights[r]) {
                r--;
            } else {
                l++;
            }
        }

        return area;
    }
};
