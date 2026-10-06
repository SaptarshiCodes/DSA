class Solution {
public:
    void solve(vector<string>& ans, int n, int open, int close, string& curr){
        if(curr.size() == 2*n) {
            ans.push_back(curr);
            return;
        }

        if(open < n) {
            curr.push_back('(');
            solve(ans, n, open+1, close, curr);
            curr.pop_back();
        }
        if(close < open) {
            curr.push_back(')');
            solve(ans, n, open, close+1, curr);
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr;
        solve(ans, n, 0, 0, curr);
        return ans;
    }
};