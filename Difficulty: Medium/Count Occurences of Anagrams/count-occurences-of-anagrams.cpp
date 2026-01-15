// User function template for C++
class Solution {
  public:
    bool allZeros(vector<int>& counter){
        for(int &i:counter) if(i!=0) return false;
        return true;
    }
    int search(string &pat, string &txt) {
        int n=txt.size();
        vector<int> counter(26,0);
        for(int i=0;i<pat.length();i++){
            char ch=pat[i];
            counter[ch-'a']++;
        }
        int i=0,j=0, result=0, k=pat.length();
        while(j<n){
            counter[txt[j]-'a']--;
            if(j-i+1==k){
                if(allZeros(counter)) result++;
                counter[txt[i]-'a']++;
                i++;
            }
            j++;
        }
        return result;
    }
};