class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int flag=false;
        int n=s.size();
        int j=n-1;
        for(int i=0;i<=n-1;i++){
            if(s[i]==s[j]){
                j--;
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
        return flag;
    }
};