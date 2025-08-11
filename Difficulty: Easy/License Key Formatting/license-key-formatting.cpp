//Back-end complete function Template for C++
class Solution {
  public:
    string ReFormatString(string S, int K) {
        string temp;
    int n = S.length();
    for (int i = 0; i < n; i++) {
        if (S[i] != '-') {
            temp.push_back(toupper(S[i]));
        }
    }
    int len = temp.length();
    string ans;
    int val = K;

    // Iterate over the string from right
    // to left and start pushing
    // characters at an interval of K
    for (int i = len - 1; i >= 0; i--) {
        if (val == 0) {
            val = K;
            ans.push_back('-');
        }
        ans.push_back(temp[i]);
        val--;
    }

    // Reverse the final string and
    // return it.
    reverse(ans.begin(), ans.end());
    return ans;
    }
};