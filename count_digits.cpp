#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int evenlyDivides(int n) {
        // code here
        int a = n; 
        int count = 0;

        while (n > 0) {
            int digit = n % 10; 
            if (digit != 0 && a % digit == 0) {
                count++; 
            }
            n /= 10; 
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
