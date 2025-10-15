class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        vector<int> res;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res.push_back(mat[i][j]);
            }
        }
        sort(res.begin(),res.end());
        if(res.size()%2==0) return res[res.size()/2];
        else return res[(res.size()-1)/2];
    }
};
