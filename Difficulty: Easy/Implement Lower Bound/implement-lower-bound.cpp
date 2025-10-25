class Solution {
  public:
    int lowerBound(vector<int> &arr, int target) {
        int low = 0, high = arr.size() - 1; 
        int res = arr.size();
      	
      	while(low <= high) {
          	int mid = low + (high - low)/2;
          	if(arr[mid] >= target) {
                res = mid;
                high = mid - 1;
            }
          	else low = mid + 1;
        }
      	return res;	
    }
};
