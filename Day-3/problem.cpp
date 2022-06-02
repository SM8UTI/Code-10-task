// Count ways to reach the n'th stair 
// https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
int countWays(int n){
        int prev1 = 1,prev2 = 1,MOD = 1e9 + 7;
        for(int i = 2; i<=n; i++){
            long long curr = 1LL*prev1 + prev2;
            prev2 = prev1;
            prev1 = curr%MOD;
        }
        return prev1;
    }
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  // } Driver Code Ends