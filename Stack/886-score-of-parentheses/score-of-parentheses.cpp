class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans = 0;
        int depth = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                depth++;
            } else {
                depth--;

                if (i > 0 && s[i - 1] == '(') {
                    ans += 1 << depth;
                }
            }
        }

        return ans;
    }
};