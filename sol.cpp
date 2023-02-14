class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        int expected[n];
        for (int i = 0; i < n; i++) {
            expected[i] = heights[i];
        }
        sort(expected, expected + n);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += (heights[i] != expected[i]);
        }
        return cnt;
    }
};
