//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int pairCubeCount(int N) {
        // code here
        int count =0;
        int max_val=cbrt(N);
            //if(N % max_val == 0) count+=2;
            for(int i=1; i*i*i<=N ;i++){
                for(int j=i; j*j*j<=N ;j++){
                    if((i*i*i) + (j*j*j) == N){
                    count+=2;
                    if(i==j)count--;
                    }
                }
                if(i*i*i == N) count++;
           }
           return count;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.pairCubeCount(N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends