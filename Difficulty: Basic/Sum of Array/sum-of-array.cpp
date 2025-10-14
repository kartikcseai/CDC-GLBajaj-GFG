class Solution {
public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        return helper(arr, arr.size());
    }

private:
    // Recursive helper function
    int helper(vector<int>& arr, int n) {
        // Base case
        if (n == 0)
            return 0;

        // Recursive case
        return arr[n - 1] + helper(arr, n - 1);
    }
};
