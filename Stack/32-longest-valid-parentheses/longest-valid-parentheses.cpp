class Solution {
public:
    int longestValidParentheses(string s) {
        int left = 0, right = 0, maxL = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] == '(')
                left++;
            if (s[i] == ')')
                right++;
            if (left < right) {
                left = 0;
                right = 0;
            }
            if (left == right) {
                maxL = max(maxL, 2 * right);
            }
        }
        left = 0;
        right = 0;

        for(int i = n-1; i >= 0; i--) {
            if (s[i] == '(')
                left++;
            if (s[i] == ')')
                right++;
            if (left > right) {
                left = 0;
                right = 0;
            }
            if (left == right) {
                maxL = max(maxL, 2 * right);
            }
        }
        return maxL;
    }
};