class Solution {
  public:
    string removeDuplicates(string &s) {
        int index = 0;
        for (int i = 0; i < s.size(); i++) {
            int j;
            for (j = 0; j < i; j++) {
                if (s[i] == s[j])
                    break;  // duplicate found
            }
            if (j == i)  // no duplicate found
                s[index++] = s[i];
        }
        s.resize(index);
        return s;
    }
};
