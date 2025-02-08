//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isPerfectNumber(int n) {
        // To store sum of divisors
    long long int sum = 1;
 
    // Find all divisors and add them
    for (long long int i=2; i*i<=n; i++)
    {
        if (n%i==0)
        {
            if(i*i!=n)
                sum = sum + i + n/i;
            else
                sum=sum+i;
        }
    } 
     // If sum of divisors is equal to
     // n, then n is a perfect number
     if (sum == n && n != 1)
          return true;
 
     return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin >> N;

        Solution ob;
        bool ans = ob.isPerfectNumber(N);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends