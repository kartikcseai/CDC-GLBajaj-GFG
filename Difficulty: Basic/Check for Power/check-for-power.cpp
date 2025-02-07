//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int isPowerOfAnother(long long X, long long Y){
        if(X==1){
            if(Y==1) return 1;
            else return 0;
        }
        
        long long pow=1;
        while(pow<Y){
            pow*=X;
        }
        if(pow==Y) return 1;
        else return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long int X, Y;
        cin >> X >> Y;
        Solution ob;
        cout << ob.isPowerOfAnother(X,Y) << endl;
    
cout << "~" << "\n";
}
    return 0; 
} 
// } Driver Code Ends