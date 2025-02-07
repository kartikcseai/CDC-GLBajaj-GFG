//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) { int x1=L1[0]; int y1=L1[1]; int x2=R1[0]; int y2=R1[1]; int x1_=L2[0]; int y1_=L2[1]; int x2_=R2[0]; int y2_=R2[1]; if(x2<x1_ || x2_<x1) return 0; else if(y2>y1_ ||y2_>y1) return 0; else return 1; }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends