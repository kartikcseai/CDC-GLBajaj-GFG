//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> getThreeLargest(vector<int> &arr)
{
    int fst = INT_MIN, sec = INT_MIN, thd = INT_MIN;

    for (int x : arr)
    {
        // If current element is greater than fst
        if (x > fst)
        {
            thd = sec;
            sec = fst;
            fst = x;
        }

        // If x is between fst and sec
        else if (x > sec && x != fst)
        {
            thd = sec;
            sec = x;
        }

        // If x is between sec and thd
        else if (x > thd && x != sec && x != fst)
            thd = x;
    }

    vector<int> res;
    if (fst == INT_MIN)
        return res;
    res.push_back(fst);
    if (sec == INT_MIN)
        return res;
    res.push_back(sec);
    if (thd == INT_MIN)
        return res;
    res.push_back(thd);
    return res;
}
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(); // To ignore the newline after the number of test cases

    while (tc-- > 0) {
        string input;
        getline(cin, input);

        vector<int> arr;
        stringstream ss(input);
        int num;

        while (ss >> num) {
            arr.push_back(num);
        }

        Solution obj;
        vector<int> ans = obj.getThreeLargest(arr);

        for (int i : ans) {
            cout << i << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends