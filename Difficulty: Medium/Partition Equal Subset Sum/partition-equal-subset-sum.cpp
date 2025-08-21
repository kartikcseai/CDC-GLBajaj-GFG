class Solution {
public:
    bool equalPartition(vector<int>& arr) {
        int n = arr.size();
        int total = 0;
        for(int i=0;i<n;i++){
            total += arr[i];
        }
        if(total % 2 != 0) return false;

        int target = total / 2;
        vector<bool> dp(target+1, false);
        dp[0] = true;

        for(int num : arr){
            for(int j=target; j>=num; j--){
                if(dp[j-num]) dp[j] = true;
            }
        }
        return dp[target];
    }
};
