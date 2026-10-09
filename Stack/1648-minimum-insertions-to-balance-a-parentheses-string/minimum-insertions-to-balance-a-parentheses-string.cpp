class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        int balance = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                balance += 2;

                if (balance % 2 != 0) {
                    ans++;
                    balance--;
                }
            } else {
                balance--;

                if (balance < 0) {
                    ans++;
                    balance = 1;
                }
            }
        }

        return ans + balance;
    }
};