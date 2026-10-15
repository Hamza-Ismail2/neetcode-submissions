class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
       
        int lm = 0, rm = m;
        int ln = 0, rn = n;
        
        int ansm = -1; bool ans = false;
        while(lm < rm) {
            int mid = lm + (rm - lm) / 2;

            if(matrix[mid][0] <= target) {
                ansm = max(ansm, mid);
                lm = mid + 1;
            } else if(matrix[mid][0] > target) {
                rm = mid;
            } else {
                lm = mid + 1;
            }
        }

        
        cout << ansm << endl;
        if(ansm == -1) {
            return false;
        }

        int ansn = -1;

        while(ln < rn) {
            int mid = ln + (rn - ln) / 2;

            if(matrix[ansm][mid] == target) {
                ansn = mid;
                ans = true;
                break;
            } else if(matrix[ansm][mid] > target) {
                rn = mid;
            } else {
                ln = mid + 1;
            }
        }

        return ans;
    }
};
