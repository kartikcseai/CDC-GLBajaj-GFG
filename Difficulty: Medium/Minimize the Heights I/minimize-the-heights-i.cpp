// User function Template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        if(arr.size()==1) return 0;
        sort(arr.begin(),arr.end());
        int ans=arr[arr.size()-1]-arr[0];
        for(int i=1;i<arr.size();i++){
            int minVal=min(arr[0]+k,arr[i]-k);
            int maxVal=max(arr[i-1]+k,arr[arr.size()-1]-k);
            ans=min(ans,maxVal-minVal);
        }
        return ans;
    }
};