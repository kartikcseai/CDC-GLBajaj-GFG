class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        unordered_map<int,int> freq;
        vector<int> result;
        
        for (int num : arr) {
            freq[num]++;
        }
        
        for (auto &p : freq) {
            if (p.second > 1) {
                result.push_back(p.first);
            }
        }
        
        sort(result.begin(), result.end());
        
        return result;
    }
};
