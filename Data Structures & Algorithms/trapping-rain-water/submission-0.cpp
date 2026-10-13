class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> rights(n, -1);
        vector<int> lefts(n, -1);
        
        int curr = n - 1;
        for(int i = n - 1; i >= 0; i--) {
            if(height[i] >= height[curr]) {
                curr = i;
            }
            rights[i] = curr;
        }

        curr = 0;
        for(int i = 0; i < n; i++) {
            if(height[i] >= height[curr]) {
                curr = i;
            }
            lefts[i] = curr;
        }

        int total = 0;
        int area = 0;
        for(int i = 0; i < n; i++) {
            if(i == lefts[i] || i == rights[i]) {
                total += area;
                area = 0;
                continue;
            } else {
                int val = min(height[lefts[i]], height[rights[i]]) - height[i];
                area += val;
            }
        }

        return total;
    }
};
