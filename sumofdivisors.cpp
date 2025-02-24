#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int sumOfDivisors(int n) {
        int sum=0;
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j*j<=i;++j)
            {
                if(i%j==0)
                {
                    if(i/j==j)
                    sum+=j;
                    else
                    sum+=j+i/j;
                }
            }
        }
        return sum;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.sumOfDivisors(N);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}