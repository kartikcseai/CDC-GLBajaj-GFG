//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		int distance(int x1, int y1, int x2, int y2)
		{
		    float res=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
            return round(res);		    
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int x1, y1, x2, y2;
    	cin >> x1 >> y1 >> x2 >> y2;
    	Solution ob;
    	int  ans = ob.distance(x1, y1, x2, y2);
    	cout << ans <<"\n";
    
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends