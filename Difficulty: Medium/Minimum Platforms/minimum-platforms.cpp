class Solution {
public:
    int findPlatform(vector<int> &arr, vector<int> &dep) {
        int n = arr.size();

        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());

        int i = 0, j = 0; 
        int platforms_needed = 0, result = 0;
        while (i < n && j < n) {
            if (arr[i] <= dep[j]) {
                platforms_needed++;
                i++;
            }
            else {
                platforms_needed--;
                j++;
            }
            result = max(result, platforms_needed);
        }

        return result;
    }
};
