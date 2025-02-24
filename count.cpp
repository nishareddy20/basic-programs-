//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int temp=n,count=0;
        while(temp!=0)
        {
            int d=temp%10;
            temp/=10;
            if(d>0 && n%d==0)
            count++;
        }
        return count;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
