//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int res = min(a, b);
        while (res > 1) {
        if (a % res == 0 && b % res == 0)
            break;
        res--;
        }
        vector<int> re;
        re.push_back(max(res,(a*b)/res));
        re.push_back(min(res,(a*b)/res));
        return re;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends