//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:

    int cost(vector<int>& a)
{
    // Minimum cost is (size - 1) multiplied with minimum element.
    int n = a.size();
    return (n - 1) * (*min_element(a.begin(), a.end()));
}
};

//{ Driver Code Starts.

int main() {

    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        int result = ob.cost(arr);

        cout << (result) << endl;
    }
    return 0;
}

// } Driver Code Ends