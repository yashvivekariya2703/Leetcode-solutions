class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> s1;

        for (char ch : s) {
            if (!s1.empty() && s1.top() == ch) {
                s1.pop();
            }
            else {
                s1.push(ch);
            }
        }

        string ans = "";

        while (!s1.empty()) {
            ans += s1.top();
            s1.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};