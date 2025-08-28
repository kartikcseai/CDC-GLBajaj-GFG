class Solution {
public:
    pair<int, int> getMinMax(vector<int> arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int min = arr[0];
        int max = arr[n-1];
        return make_pair(min, max);
    }
};
