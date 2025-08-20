class Solution {
public:
    int peakElement(vector<int> &arr) {
        int n = arr.size();
        
        if (n == 0) return -1;
        if (n == 1) return 0; 
        
        for (int i = 0; i < n; i++) {
            if ((i == 0 || arr[i] >= arr[i-1]) && (i == n-1 || arr[i] >= arr[i+1])) {
                return i; 
            }
        }
        return -1; 
    }
};
